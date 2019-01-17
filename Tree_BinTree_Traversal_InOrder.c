void InOrderTraversal(BinTree BT){
  BinTree T = BT;
  Stack S = CreateStack(MaxSize);
  while(T || !Empty(S)){
    while(T){
      Push(S,T);
      T = T->left;
    }
    if(!Empty(S)){
      T = Pop(S);
      printf("%d", T->data);
      T = T->right;
    }
  }
}
      
  
