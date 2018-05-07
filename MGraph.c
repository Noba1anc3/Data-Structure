#define MaxVertexNum 100
#define INFINITY 65535
typedef int Vertex
typedef int WeightType

typedef struct ENode *PtrToENode
struct ENode{
  Vertex V1, V2;
  WeightType Weight;
};
typedef PtrToENode Edge;

typedef struct GNode *PtrToGNode
struct GNode{
  int Nv;
  int Ne;
  WeightType G[MaxVertexNum][MaxVertexNum];
};
typedef PtrToGNode MGraph;

MGraph CreateGraph(int VertexNum){
  Vertex V, W;
  MGraph Graph;
  
  Graph = (MGraph)malloc(sizeof(struct GNode));
  Graph->Nv = VertexNum;
  Graph->Ne = 0;
  for(V = 0; V<Graph->Nv; V++)
    for(W = 0; W<Graph->Nv;W++)
      Graph->G[V][W] = INFINITY;
  
  return Graph;
}

void InsertEdge(MGraph Graph, Edge E){
  Graph->G[E->V1][E->V2] = E->Weight;
  Graph->G[E->V2][E->V1] = E->Weight;
}

MGraph BuildGraph(){
  MGraph Graph;
  Edge E;
  Vertex V;
  int Nv, i;
  scanf("&d", &Nv);
  Graph = CreateGraph(Nv);
  scanf("%d",&(Graph->Ne));
  
  if(Graph->Ne != 0){
    E = (Edge)malloc(sizeof(struct ENode));
    for(i = 0;i < Graph->Ne;i++){
      scanf("&d" "&d" "%d",&E->V1,&E->V2,&E->Weight);
      E->V1--;
      E->V2--;
      InsertEdge(Graph,E);
      }
  }
  
  return Graph;
}

bool Floyd(MGraph Graph, WeightType D[][MaxVertexNum], Vertex path[][MaxVertexNum]){
  Vertex i,j,k;
  
  for(i = 0;i < Graph->Nv; i++)
    for(j = 0; j < Graph->Nv; j++){
      D[i][j] = Graph->G[i][j];
      path[i][j] = 1;
    }
  
  for(k = 0;k < Graph->Nv; i++)
      for(i = 0;i < Graph->Nv; i++)
          for(j = 0;j < Graph->Nv; i++)

