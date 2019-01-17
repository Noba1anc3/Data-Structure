#include <stdio.h>
#include <stdlib.h>

typedef char ElemType

typedef struct BiTNode{
	ElemType data;
	struct BiTNode *lchild, *rchild;
}BiTNode, *BiTree;

//前序创建
void PreCreateBiTree(BiTree *T){
	char c;
	scanf("%c", &c);
	if(c == ' ')
		*T = NULL;
	else{
		*T = (BiTNode *)malloc(sizeof(BiTNode))
		(*T)->data = c;
		CreateBiTree(&(*T)->lchild);
		CreateBiTree(&(*T)->rchild);
	}
}

visit(ElemType data, int level){
	printf("%c位于第%n层\n", data, level);
}

PreOrderTraverse(BiTree T, int level){
	if( T ){
		visit(T->data, level);
		PreOrderTraverse(T->lchild, level + 1);
		PreOrderTraverse(T->rchild, level + 1);
	}
}

int main(){
	int level = 1;
	BiTree T = NULL;
	
	PreCreateBiTree(&T);
	PreOrderTraverse(T,level);
	
	return 0;
}
	
