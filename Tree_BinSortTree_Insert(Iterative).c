void INSERTBST(BTree *T, datatype item){
  BTree p, q;
  p = (BTree)malloc(sizeof(BTNode));
  p->data = item;
  p->lchild = p->rchild = NULL;
  if(T == NULL)
    T = p;
  else{
    q = T;
    while(true){
      if(item < q->data){
        if(q->lchild != NULL)
          q = q->lchild;
        else{
          q->lchild = p;
          break;
        }
      }
      else{
        if(q->rchild != NULL)
          q = q->rchild;
        else{
          q->rchild = p;
          break;
        }
      }
    }
  }
}
      
