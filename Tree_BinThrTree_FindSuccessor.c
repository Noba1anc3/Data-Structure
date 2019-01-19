BiThrTree InSucc(BiThrTree x){
  BiThrTree s;
  s = x->rchild;
  if(x->rbit == 0)
    while(s->lbit == 0)
      s = s->lchild;
  return s;
}
