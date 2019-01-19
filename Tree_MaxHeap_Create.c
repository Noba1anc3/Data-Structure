struct HeapStruct{
  ElementType *Elements;
  int Size;
  int Capacity;
}HeapStruct, *MaxHeap;

MaxHeap CreateMaxHeap(int MaxSize){
  MaxHeap H = malloc(sizeof(struct HeapStruct));
  H->Elements = malloc((MaxSize + 1)*sizeof(ElementType));
  H->Size = 0;
  H->Capacity = MaxSize;
  H->Elements[0] = MaxData;
  return H;
}
