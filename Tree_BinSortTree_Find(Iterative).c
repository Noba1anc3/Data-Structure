// cause the RecursionVer of FindInBSTree is a rear-recursion code, it can be transformed to iterationVer.

Position FindInBSTree_IterationVer(ElementType x, BinTree BST){
  while(BST){
    if(x > BST->Data)
      BST = BST -> Right;
    else if (x < BST->Data)
      BST = BST -> Left;
    else
      return BST;
  }
  return NULL;
}
