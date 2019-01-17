#define MAXSIZE 100

typedef struct{
 ElemType  *base;  //内存分配的基地址
	int	 front;
	int  rear;
}cycleQueue;

void initQueue(cycleQueue *q){
	q->base = (ElemType *) malloc( MAXSIZE * sizeof(ElemType) );
	if( !q->base ){
		exit(0)
	}
	q->front = q->rear = 0;
}

void InsertQueue(cycleQueue *q, ElemType e){
	if( (q->rear+1) % MAXSIZE == q->front )
		return;
	q->base[q->rear] = e;
	q->rear = (q->rear+1) % MAXSIZE;
}

DeleteQueue(cycleQueue q, ElemType *e){
	if( q->front == q->rear )
		return;
	*e = q->base[q->front];
	q->front = (q->front+1) % MAXSIZE;
}
