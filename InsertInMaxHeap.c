void InsertInMaxHeap(MaxHeap H, ElementType item){
  int i;
  if(IsFull(H)){
    printf("Heap Is Full");
    return;
  }
  else{
    i = ++H->Size;
    for(;H->Elements[i/2] <= item;i/=2)
      H->Elements[i] = H->Elements[i/2];
    H->Elements[i] = item;
  }
}
