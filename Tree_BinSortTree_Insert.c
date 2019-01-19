BinTree InsertInBSTree(ElementType X, BinTree BST){
  if(!BST){
    BST = malloc(sizeof(struct TreeNode));
    BST->Data = X;
    BST->Left = BST->Right = NULL;
  }
  else{
    if(X < BST->Data)
      BST->Left = InsertInBSTree(X, BST->Left);
    else
      BST->Right = InsertInBSTree(X, BST->Right);
  }
  return BST;
}
