
/* Union Find Question */

/* Use Tree-structure to describe Set, every node in the tree represents an element in the set.
The architecture in the tree-structure is different from the normal structure, in this question,
child points to its father.*/

/*
 —————— ———— ———— ———— ———— ———— ———— ————
｜index|  0 |  1 |  2 |  3 |  4 |  5 |  6 |
 —————— ———— ———— ———— ———— ———— ———— ————
｜  S  |  6 |  6 | -1 |  4 |  2 |  2 | -1 |
 —————— ———— ———— ———— ———— ———— ———— ————
*/

/* Input Format
   5
   C 3 2
   I 3 2
   C 1 5
   I 4 5
   I 2 4
   C 3 5
   S        */

/* Output Format
   No
   Yes
   Yes
   There are 2 components */

/* To Optimize the function Union(): When A tree is unioned to B tree, it is significant to attach a shorter one to a longer one.
   As shown in the chart, the head node of each tree used to be -1, and now it is (the height of the tree)*(-1) 
   When it is initializing, it is advisable to set the value as -1, means that the height of the tree(only the node) is one */

/* To Optimize the function Find(): Path Compressing
the new function find() transfer every son and itsgrandson of a head node into the sons of the head node.

The Old Ver:
              SetName Find(SetType S, ElementType X){
               for(;S[X]>=0;X=S[X])
                 return X;
*/

typedef int ElementType;
typedef int SetName;
typedef ElementType SetType[MaxSize];

int main(){
  SetType S;
  int n;
  char in;
  scanf("%d",&n);
  Initialization(S,n);
  do{
    scanf("%c",&in);
    switch(in){
      case 'I':
        Input_Connection(S);
        break;
      case 'C':
        Check_Connection(S);
        break;
      case 'S':
        Check_Network(S,n);
        break;
    }
  }while(in != 'S');
  return 0;
}

void Input_Connection(SetType S){
  ElementType u,v;
  SetName Root1, Root2;
  scanf("%d %d",&u&v);
  Root1 = Find(S,u-1);
  Root2 = Find(S,v-1);
  if(Root1 != Root2)
    Union(S,Root1,Root2);
}

void Check_Connection(SetType S){
  ElementType u,v;
  SetName Root1, Root2;
  scanf("%d %d",&u&v);
  Root1 = Find(S,u-1);
  Root2 = Find(S,v-1);
  if(Root1 == Root2)
    printf("Yes\n");
  else
    Printf("No\n");
}

void Check_network(SetType S, int n){
  int i, counter = 0;
  for(i = 0;i < n;i++)
    if(S[i] < 0)
      counter++;
  if(counter == 1)
    printf("Connected");
  else
    printf("there are %d components.\n",counter);
 }
 
SetName Find(SetType S, ElementType X){
  if(S[X] < 0)
    return X;
  else
    return S[X] = Find(S,S[X]);
 
void Union(SetType S, SetName Root1, SetName Root2){
  if((-1)*S[Root2] > (-1)*S[Root1])
  //if(S[Root2] < S[Root1])
    S[Root1] = Root2;
  else{
    if(S[Root2] == S[Root1])
      S[Root1]--; 
   S[Root2] = Root1;
}
