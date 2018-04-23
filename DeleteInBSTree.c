BST DeleteInBSTree(ElementType X, BinTree BST){
  Position Tmp;
  if(!BST)
    printf("None");
  else if( X < BST->Data)
    BST->Data = Delete(X,BST->Left);
  else if( X < BST->Data)
    BST->Data = Delete(X,BST->Right);
  else{
    if(BST->Left && BST->Right)
    
