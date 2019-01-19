//最大堆中元素按照层次遍历后，任意节点的父节点为i/2，左子节点为2i，右子节点为2i+1，自左向右元素依次减小
void InsertInMaxHeap(MaxHeap H, ElementType item){
  int i;
  if(IsFull(H)){
    printf("Heap Is Full");
    return;
  }
  else{
    for(i = ++H->Size; item > H->Elements[i/2]; i/=2)
      H->Elements[i] = H->Elements[i/2];
    H->Elements[i] = item;
  }
}
