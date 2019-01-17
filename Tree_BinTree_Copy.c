BTree COPYBT(BTree T1){
  BTree T2;
  if(T1 == NULL)
    return NULL;
  else{
    T2 = (BTree)malloc(sixeof(BTNode));
    T2->data = T1->data;
    T2->lchild = COPYBT(T1->lchild);
    T2->rchild = COPYBT(T1->rchild);
  }
  return T2;
}
