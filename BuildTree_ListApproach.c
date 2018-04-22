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
