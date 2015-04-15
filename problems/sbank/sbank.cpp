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


int cmp(const void* a, const void* b) {
  char** ia = (char**) a;
  char** ib = (char**) b;
  return strcmp(*ia, *ib);
}

int main() {

  int t;
  int n;

  char **accs = (char**) malloc(100000 * sizeof(char*));
  REP(i,0,100000)
    accs[i] = (char*) malloc(35*sizeof(char));
  
  t = GI;
  while (t--) {
    n = GI;
    getchar();
    REP(i,0,n) {
      gets(accs[i]);
    }
    /*
    REP(i,0,n) {
      printf("%s\n", accs[i]);
    }
    */
    qsort(accs, n, sizeof(char*), cmp);
    
    REP(i,0,n) {
      printf("%s", accs[i]);
      int cnt=1;
      int tmp=i+1;
      while(tmp<n && strcmp(accs[i], accs[tmp])==0) {
	cnt += 1;
	tmp += 1;
      }
      i = tmp-1;
      printf("%d\n", cnt);
    }
    if (t>0) printf("\n");
  }
  
  return 0;
}
