ElementType DeleteInMaxHeap(MaxHeap H){
  int Parent, Child;
  ElementType MaxItem, temp;
  if(IsEmpty(H)){
    printf("The Max Heap Is Empty");
    return;
  }
  MaxItem = H->Elements[1];
  temp = H->Elements[H->Size--];
  for(Parent = 1;Parent*2 <= H->Size; Parent = Child){
    Child = Parent * 2;
    if((Child != H->Size) && (H->Elements[Child] < H->Elements[Child + 1]))
      Child++;
    if(temp >= H->Elements[Child])
      break;
    else
      H->Elements[Parent] = H->Elements[Child];
  }
  H->Elements[Parent] = temp;
  return MaxItem;
}
      
