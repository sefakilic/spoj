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

char strings[10000][50];

int cmp(const void* a, const void* b) {
  char** ia = (char**) a;
  char** ib = (char**) b;
  return strcmp(*ia, *ib);
}

int main() {
  int t;
  int n;
  int yes;
  char** strings = (char**) malloc(10000 * sizeof(char*));
  REP(i,0,10000)
    strings[i] = (char*) malloc(50);

  t = GI;
  while (t--) {
    n = GI;
    REP(i,0,n)
      scanf("%s", strings[i]);
    
    qsort(strings, n, sizeof(char*), cmp);
    
    yes = 1;
    REP(i,0,n-1) {
      if (strncmp(strings[i], strings[i+1], strlen(strings[i])) == 0) {
	yes = 0;
	break;
      }
    }
    printf("%s\n", yes?"YES":"NO");
  }
  
  return 0;
}
