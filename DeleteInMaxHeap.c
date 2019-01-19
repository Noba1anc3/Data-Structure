//https://www.jianshu.com/p/21bef3fc3030
//最大堆的删除操作只允许删去最顶端（即最大）元素

ElementType DeleteInMaxHeap(MaxHeap H){

  int Parent, Child;
  ElementType MaxItem, temp;

  if(IsEmpty(H)){
    printf("The Max Heap Is Empty");
    return;
  }

  MaxItem = H->Elements[1];
  temp = H->Elements[H->Size--];  //最大堆中最小的元素（移动其是为了使删除后的最大堆可以保持原有的完全二叉树性质）

  for(Parent = 1; Parent*2 <= H->Size; Parent = Child){   //从最大堆根节点向下遍历
    Child = Parent * 2;

    //看当前节点的左儿子大还是右儿子大，选择大者
    if((Child != H->Size) && (H->Elements[Child] < H->Elements[Child + 1]))
      Child++;

    if(temp >= H->Elements[Child])
      break;
    else
      H->Elements[Parent] = H->Elements[Child];  //使最大堆中任意子树的根节点为最大值
  }

  H->Elements[Parent] = temp;

  return MaxItem;
}
      
