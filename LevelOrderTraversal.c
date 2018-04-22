void LevelOrderTraversal(BinTree BT){
  Queue Q;
  BinTree T;
  if(!BT)
    return;
  Q = CreateQueue(MaxSize);
  AddQ(Q,BT);
  While(!IsEmpty(Q)){
    T = DeleteQ(Q);
    printf("%d",T->data);
    if(T->Left) 
      AddQ(Q,T->Left);
    if(T->Right)
      AddQ(Q,T->Right);
  }
}
