BinTree DeleteInBSTree(ElementType X, BinTree BST){
  Position Tmp;
  if(!BST)
    printf("None");
  else if( X < BST->Data)
    BST->Left = DeleteInBSTree(X,BST->Left);
  else if( X > BST->Data)
    BST->Right = DeleteInBsTree(X,BST->Right);
  else{
    if(BST->Left && BST->Right){
        Tmp = FindMin(BST->Right);
        BST->Data = Tmp->Data;
        BST->Right = DeleteInBsTree(BST->Data,BST->Right);
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
    
