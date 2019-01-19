#include <stdio.h>
#include <stdlib.h>

typedef char ElemType
typedef enum {Link, Thread} PointerTag;

typedef struct BiThrNode{
	ElemType data;
	struct BiThrNode *lchild, *rchild;
	PointerTag ltag, rtag;
}BiThrNode, *BiThrTree;

BiThrTree pre;

//前序遍历建立二叉树
CreateBiThrTree(BiThrTree *T){
	char c;
	scanf("%c",&c);
	if(c == ' ')
		*T = NULL;
	else{
		*T = (BiThrNode *)malloc(sizeof(BiThrNode));
		(*T)->data = c;
		(*T)->ltag = (*T)->rtag = Link;
		CreateBiThrTree(&(*T)->lchild);
		CreateBiThrTree(&(*T)->rchild);
	}
}

//中序遍历线索化
InThreading(BiThrTree T){
	if( T ){
		InThreading( T->lchild );
		
		if( !T->lchild ){
			T->ltag = Thread;
			T->lchild = pre;
		}
		
		if( !pre->rchild ){
			pre->rtag = Thread;
			pre->rchild = T;
		}
		
		pre = T;
			
		InThreading( T->rchild );
	}
}

//生成二叉树的头指针
InOrderThreading( BiThrTree *p, BiThrTree T){

	*p = (BiThrNode *)malloc(sizeof(BiThrNode));
  
	(*p)->ltag = Link;
	(*p)->rtag = Thread;
	(*p)->rchild = *p;
  
	if( !T )
		(*p)->lchild = *p;
    
	else{
		(*p)->lchild = T;
		pre = *p;
		InThreading(T);
		pre->rchild = *p;
		pre->rtag = Thread;
		(*p)->rchild = pre;
	}
  
}
		
//非递归（迭代）中序遍历二叉树
void InOrderTraverse( BiThrTree T){
	BiThrTree p;
	p = T->lchild;
	
	while(p != T){
		
		while(p->ltag == Link){
			p = p->lchild;
		}
		printf("%c", p->data);
		
		while( p->rtag == Thread && p->rchild != T ){
			p = p->rchild;
			printf("%c", p->data);
		}
		p = p->rchild;
    
	}
  
}
		
int main(){
	BiThrTree P, T = NULL;
	CreateBiThrTree( &T );
	InOrderThreading( &P, T );
	printf("中序遍历输出结果为：");
	InOrderTraverse( P );
	return 0;
}
