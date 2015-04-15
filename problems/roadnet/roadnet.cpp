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

int D[200][200];

int main() {
  int t;
  int n;
  int same;
  t = GI;
  while(t--) {
    n = GI;
    REP(i,0,n) {
      REP(j,0,n) {
	D[i][j] = GI;
      }
    }
    REP(i,0,n) {
      REP(j,i+1,n) {
	same = 1;
	REP(k,0,n) {
	  if (k==i || k==j) continue;
	  if (D[i][k] + D[k][j] <= D[i][j]) {
	    same = 0;
	    break;
	  }
	}
	if (same)
	  printf("%d %d\n", i+1,j+1);
      }
    }

    if(t > 0)
      printf("\n");
  }
  return 0;
}
