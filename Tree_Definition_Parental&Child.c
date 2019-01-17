#define  MAX_TREE_SIZE  100
typedef char ElemType

//孩子节点
typedef struct CTNode{
	int child;  //孩子节点的下标
	struct CTNode *next;  //指向下一个孩子节点的指针
} *ChildPtr;

//表头结构
typedef struct{
	ElemType data;  //节点的数据
	int parent;  //双亲节点的下标
	ChildPtr firstchild;  //指向第一个孩子的指针
} CTBox;

//树结构
typedef struct{
	CTBox nodes[MAX_TREE_SIZE];
	int r; //根的位置
	int n; //节点数目
}
