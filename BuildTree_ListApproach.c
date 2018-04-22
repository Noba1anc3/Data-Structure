//input format:
/*  8          (NUM_OF_NODE)   - means the node have no side-son
    A 1 2      (0)             A means node name
    B 3 4      (1)
    C 5 -      (2)
    D - -      (3)
    E 6 -      (4)
    G 7 -      (5)
    F - -      (6)
    H - -      (7)
*/

/* 

    Tree_Architecture
      A  B  C  D  E  G  F  H
Left  1  3  5 -1  6  7 -1 -1
Right 2  4 -1 -1 -1 -1 -1 -1

*/

// check[] for find the root of the tree
// traversal the list, if there is a node that no other node point to it, then it is the root of the tree

#define MaxTree 10
#define ElementType char
#define Tree int
#define Null -1

struct TreeNode{
  ElementType Element;
  Tree Left;
  Tree Right;
}T1[MaxTree],T2[MaxTree];

int N;
char cl,cr;

Tree BuildTree(struct TreeNode T[]){
  int i;
  int check[N] = 0;
  Tree Root;
  scanf("%d\n", &N);
  if(N){
    for(i = 0;i < N;i++)
      check[i] = 0;
    for(i = 0;i < N;i++){
      scanf("%c %c %c\n", &T[i].Element, &cl, &cr);
      if(cl != '-'){
        T[i].Left = cl - '0';
        check[T[i].Left] = 1;
      }
      else
        T[i].Left = Null;
      if(cr != '-'){
        T[i].Right = cr - '0';
        check[T[i].Right] = 1;
      }
      else
        T[i].Right = Null;
    }
    for(i = 0; i< N;i++)
      if(!check[i])
        breaak;
    Root = i;
  }
  return Root;
