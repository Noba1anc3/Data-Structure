BinTree ReBuildTree(char *post, int i, int j, char *in, int m, int n)
{
    //post[i.....j] in[m....n]
    int x;  //x是遍历器
    BinTree p;   //p是新的结点
    p = (BinTree)malloc(sizeof(BinTNode));
    p->data = *(post + j);      //从后序序列中读取结点信息
    x = m;

    //在中序中找到根节点位置
    for (; *(in + x) != *(post + j); x++)
        ;

    //接下来递归完成左右子树的构建
    if (x == m) 
        p->lchild = NULL;
    else
    {
        p->lchild = ReBuildTree(post, i, i+x-m-1, in, m, x-1);
    }

    if (x == n) 
	p->rchild = NULL;

    else
    {
        p->rchild = ReBuildTree(post, i+x-m, j-1, in, x+1,n);
    } 
    return p;
}
