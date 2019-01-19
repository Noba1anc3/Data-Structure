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
