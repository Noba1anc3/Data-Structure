void PreOrderTraversal(BinTree BT){
  BinTree T = BT;
  Stack S = CreateStack(MaxSize);
  while(T || !Empty(S)){
    while(T){
      Push(S,T);
      printf("%d", T->data);
      T = T->left;
    }
    if(!Empty(S)){
      T = Pop(S);
      T = T->right;
    }
  }
}
      
  
