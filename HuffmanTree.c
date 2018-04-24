typedef struct TreeNode *HuffmanTree;
struct TreeNode{
  int Weight;
  HuffmanTree Left,Right;
}

HuffmanTree HuffmanTree( MinHeap H){
  int i;
  HuffmanTree T;
  for(i = 1;i<H->Size;i++){
    T = malloc(sizeof(struct TreeNode));
    T->Left = DeleteInMinHeap(H);
    T->Right = DeleteInMinHeap(H);
    T->Weight = T->Left->Weight + T->Right->Weight;
    Insert(H,T);
  }
  T = DeleteInMinHeap(H);
  return T;
}

//O(Nlog2N)
