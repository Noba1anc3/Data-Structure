void InOrderTraversal(BinTree BT){
  BinTree T = BT;
  Stack S = CreateStack(MaxSize);
  while(T || IsEmpty(S)){
    while(T){
      Push(S,T);
      T = T->left;
    }
    if(!IsEmpty(S)){
      T = Pop(S);
      printf("%d", T->data);
      T = T->right;
    }
  }
}
      
  
