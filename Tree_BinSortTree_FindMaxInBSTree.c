Position FindMaxInBSTree(BinTree BST){
  if(BST)
    while(BST->Right)
      BST = BST->Right;
  return BST;
}
