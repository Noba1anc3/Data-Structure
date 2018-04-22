void PreOrderTraversal_Recursion(BinTree BT){
  if(BT){
    printf("%d", BT->data);
    PreOrderTraversal_Recursion(BT->Left);
    PreOrderTraversal_Recursion(BT->Right);
}
