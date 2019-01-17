int SIMILAR(BTree T1, BTree T2){
  if(!T1 && !T2)
    return 1;
  if(T1 && T2 && SIMILAR(T1->lchild, T2->rchild) && SIMILAR(T1->rchild, T2->rchild))
    return 1;
  return 0;
}
