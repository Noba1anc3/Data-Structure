void LevelOrderTraversal(BinTree BT){
  Queue Q;
  BinTree T;
  if(!BT)
    return;
  Q = CreateQueue(MaxSize);
  AddQ(Q, BT);
  While(!Empty(Q)){
    T = DeleteQ(Q);
    printf("%d", T->data);
    if(T->Left) 
      AddQ(Q, T->Left);
    if(T->Right)
      AddQ(Q, T->Right);
  }
}

///////////////////////////////////////////////////////////

void LevelOrderTraverse(int head, BTNode nodes[]){

	int queue[10];
	int front = 0, rear = 0;

	if(head < 0)
		return;

	queue[rear++] = head;

	while(front != rear){
		int prt = queue[front++];

		if( count < n-1 ){
			printf("%d ", prt);
			count++;
		}
		else
			printf("%d\n", prt);

		if(nodes[prt].lchild >= 0)
			queue[rear++] = nodes[prt].lchild;
		
		if(nodes[prt].rchild >= 0)
			queue[rear++] = nodes[prt].rchild;
	}

	count = 0;

}
