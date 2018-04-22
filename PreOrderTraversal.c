void PreOrderTraversal(BinTree BT){
  BinTree T = BT;
  Stack S = CreateStack(MaxSize);
  while(T || IsEmpty(S)){
    while(T){
      Push(S,T);
      printf("%d", T->data);
      T = T->left;
    }
    if(!IsEmpty(S)){
      T = Pop(S);
      T = T->right;
    }
  }
}
      
  
