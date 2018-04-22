void PreOrderPrintLeaves(BinTree BT){
  if(BT){
    if(!BT->Left && !BT->Right)
      printf("%d", BT->data);
    PreOrderPrintLeaves(BT->Left);
    PreOrderPrintLeaves(BT->Right);
}
