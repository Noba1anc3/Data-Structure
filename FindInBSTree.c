Position FindInBSTree (ElementType x, BinTree BST){
  if(!BST)
    return NULL;
  if( x > BST->Data)
    return FindInBSTree(ElementType x, BinTree BST->Right);
  else if( x < BST->Data)
    return FindInBSTree(ElementType x, BinTree BST->Left);
  else
    return BST;
}
