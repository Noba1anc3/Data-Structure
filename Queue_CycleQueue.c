#define MAXSIZE 100

typedef struct{
 	ElemType  *base;  //内存分配的基地址
	int  front;
	int  rear;
}cycleQueue;

int initQueue(cycleQueue *q){
	q->base = (ElemType *) malloc( MAXSIZE * sizeof(ElemType) );
	if( !q->base ){
		return 0;
	}
	q->front = q->rear = 0;
	return 1;
}

int InsertQueue(cycleQueue *q, ElemType e){
	if( (q->rear+1) % MAXSIZE == q->front )
		return 0;
	q->base[q->rear] = e;
	q->rear = (q->rear+1) % MAXSIZE;
	return 1;
}

int DeleteQueue(cycleQueue q, ElemType *e){
	if( q->front == q->rear )
		return 0;
	*e = q->base[q->front];
	q->front = (q->front+1) % MAXSIZE;
	return 1;
}
