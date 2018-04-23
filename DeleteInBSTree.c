BinTree DeleteInBSTree(ElementType X, BinTree BST){
  Position Tmp;
  if(!BST)
    printf("None");
  else if( X < BST->Data)
    BST->Left = DeleteInBSTree(X,BST->Left);
  else if( X > BST->Data)
    BST->Right = DeleteInBSTree(X,BST->Right);
  else{
    if(BST->Left && BST->Right){
        Tmp = FindMin(BST->Right);
      //Tmp = FindMax(BST->Left);
        BST->Data = Tmp->Data;
        BST->Right = DeleteInBSTree(BST->Data,BST->Right);
      //BST->Left = DeleteInBSTree(BST->Data,BST->Left);
    }
    else{
      Tmp = BST;
      if(!BST->Left)
        BST = BST->Right;
      else if(!BST->Right)
        BST = BST->Left;
      free(Tmp);
    }
  }
  return BST;
}
    
