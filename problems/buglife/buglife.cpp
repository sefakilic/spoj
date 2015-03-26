#include <iostream>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <numeric>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <vector>
#include <list>
#include <stack>
#include <set>
#include <map>
#include <queue>
#include <cctype>
#include <climits>

using namespace std;

typedef long long LL;
typedef unsigned long long ULL;
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<vector<int> > vvi;

#define GI ({int t; scanf("%d", &t); t;})
#define GF ({double t; scanf("%lf", &t); t;})
#define GLL ({LL t; scanf("%lld", &t); t;})
#define REP(i,a,b) for(int i=a; i<b; i++)
#define ALL(v) (v).begin(), (v).end()
#define pb push_back
#define INF (int)1e9
#define EPS (double) (1e-9)
#define PI (3.141592653589793)

// Graph data structure implementation
#define MAXV 2000 // maximum number of vertices
// Two coloring graphs
int color[MAXV];
bool bipartite = true;


typedef struct edgenode{
  int y;                 // adjacency
  int weight;            // edge weight, if any
  struct edgenode *next; // next edge in list
} edgenode;

typedef struct {
  edgenode *edges[MAXV];   // adjacency info
  int degree[MAXV];        // outdegree of each vertex
  int nvertices;             // number of vertices in the graph
  int nedges;                // number of edges in the graph
  bool directed;             // is the graph directed?
} graph;

bool processed[MAXV];    // which vertices have been processed
bool discovered[MAXV];   // which vertices have been found
int parent[MAXV];        // discovery relation

void initialize_graph(graph *g, bool directed) {
  g->nvertices = 0;
  g->nedges = 0;
  g->directed = directed;
  for (int i=0; i<MAXV; i++) {
    g->degree[i] = 0;
    g->edges[i] = NULL;
  }
}

void insert_edge(graph *g, int x, int y, bool directed) {
  edgenode *p; //temp pointer
  p = (edgenode*) malloc(sizeof(edgenode));
  p->weight = 0;
  p->y = y;
  p->next = g->edges[x];
  g->edges[x] = p;  // insert at head of list
  g->degree[x]++;
  if (directed==false)
    insert_edge(g, y, x, true);
  else
    g->nedges++;
}

void print_graph(graph *g) {
  edgenode *p;
  for (int i=0; i<g->nvertices; i++) {
    printf("%d: ", i);
    p = g->edges[i];
    while (p) {
      printf(" %d", p->y);
      p = p->next;
    }
    printf("\n");
  }
}

void read_graph(graph *g, bool directed) {
  int m;
  int x,y;
  initialize_graph(g, directed);
  scanf("%d %d", &(g->nvertices), &m);
  for (int i=0; i<m; i++) {
    scanf("%d %d", &x, &y);
    insert_edge(g, x-1, y-1, directed);
  }
}

// Breadth-First search

void process_vertex_early(int v) {

}

void process_vertex_late(int v) {
  
}

int complement(int color) {
  if (color==1) return 2; //black
  if (color==2) return 1; //white
  return 0;
}

void process_edge(int x, int y) {
  if (color[x]==color[y]) {
    bipartite = false;
    //printf("Not bipartite due to (%d,%d)\n", x, y);
  }
  color[y] = complement(color[x]);
}

void initialize_search(graph *g) {
  // initialize search
  for (int i=0; i<g->nvertices; i++) {
    processed[i] = discovered[i] = false;
    parent[i] = -1;
  }
}

void bfs(graph *g, int start) {
  
  queue<int> q;   // queue of vertices to visit
  int v;     // current vertex
  int y;     // successor vertex
  edgenode *p; // temp pointer

  //initialize_search(g);
  
  q.push(start);
  discovered[start] = true;
  while (q.empty() == false) {
    v = q.front(); q.pop();
    process_vertex_early(v);
    processed[v] = true;
    p = g->edges[v];
    while (p) {
      y = p->y;
      if ((processed[y] == false) || g->directed)
	process_edge(v,y);
      if (discovered[y] == false) {
	q.push(y);
	discovered[y] = true;
	parent[y] = v;
      }
      p = p->next;
    }
    process_vertex_late(v);
  }
}

void find_path(int start, int end, int parents[]) {
  // path from start to end
  if ((start==end) || (end==-1)) {
    printf("%d\n", start);
  } else {
    find_path(start, parents[end], parents);
    printf(" %d", end);
  }
}


void twocolor(graph *g) {
  for (int i=0; i<g->nvertices; i++)
    color[i] = 0; // uncolored
  initialize_search(g);
  for (int i=0; i<g->nvertices; i++) {
    if (discovered[i] == false) {
      color[i] = 1; // white
      bfs(g,i);
    }
  }
}

int main() {
  int t = GI;
  REP(i, 0, t) {
    graph g;
    bipartite = true;
    initialize_graph(&g, false);
    read_graph(&g, false);
    twocolor(&g);
    printf("Scenario #%d:\n", i+1);
    if (bipartite)
      printf("No suspicious bugs found!\n");
    else
      printf("Suspicious bugs found!\n");
  }
  return 0;
}

