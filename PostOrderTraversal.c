void PostOrderTraversal(BinTree BT){

  BinTree T = BT, S[Maxsize];
  int S_temp[Maxsize], flag, top = -1;

  while(T || top != -1){

    while(T){

      S[++top] = T;
      S_temp[top] = 0; 
      T = T->left;

    }

    T = S[top];
    flag = s_temp[top--];
    
    if(flag == 0){

      S[++top] = T;
      S_temp[top] = 1; 
      T = T->right;

    }
    
    else{
      
      VISIT(T);
      T = NULL;
      
    }

  }

}
