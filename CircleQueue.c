 void AddQ( Queue PtrQ, ElementType item){
  if(Ptr->rear + 1) %MaxSize == PtrQ -> front){
    printf("Queue fulled");
    return;
  }
  Ptr->rear = (PtrQ->rear +1) % MaxSize;
  PtrQ -> Data[PtrQ -> rear] = item;
}

ElementType DeleteQ ( Queue PtrQ){
  if(Ptr->front == Ptr->rear){
    printf("Queue Empty");
    return ERROR;
  }
  else{
    PtrQ->front = (PtrQ->front + 1)% MaxSize;
    return PtrQ->Data[PtrQ->front];
  }
}
