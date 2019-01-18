#define M  50
int DEPTHBT(BTREE T){
  BTREE STACK1[M], p = T;
  int STACK2[M];
  int curdepth, maxdepth = 0, top = -1;
  if( T!= NULL ){
    curdepth = 1;
    do{
      while( p != NULL ){
        STACK1[++top] = p;
        STACK2[top] = curdepth;
        p = p->lchild;
        curdepth++;
      }
      p = STACK1[top];
      curdepth = STACK2[top--];
      if(p->lchild == NULL && p->rchild == NULL)
        if(curdepth > maxdepth)
          maxdepth = curdepth;
      p = p->rchild;
      curdepth++;
    }while( p!= NULL || top != -1);
  }
  return maxdepth;
}
