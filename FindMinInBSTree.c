Position FindMinInBSTree(BinTree BST){
  if(!BST)
    return NULL;
  else if(!BST->Left)
    return BST;
  else
    return FindMinInBSTree(BST->Left);
}
