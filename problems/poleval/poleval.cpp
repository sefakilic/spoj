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

int main() {

  int n;
  int c[1000];
  int k;
  int x;
  LL t;
  LL result;
  int cs = 0; //case
  while (true) {
    // get input
    n = GI;
    if (n==-1) break;
    REP(i,0,n+1)
      c[i] = GI;
    k = GI;
    printf("Case %d:\n", ++cs);
    REP(i,0,k) {
      x = GI;
      // solve polynomial
      t = 1;
      result = 0;
      REP(j,0,n+1) {
	result += c[n-j]*t;
	t *= x;
	//printf("result %lld t %lld\n", result, t);
      }
      printf("%lld\n", result);
    }
  }
  return 0;
}
