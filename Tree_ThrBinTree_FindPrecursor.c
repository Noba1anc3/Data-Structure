BiThrTree InPrior(BiThrTree x){
  BiThrTree s;
  s = x->lchild;
  if(x->lbit == 0)
    while(s->rbit == 1)
      s = s->rchild;
  return s;
}
