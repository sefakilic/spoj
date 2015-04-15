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

map<int,ULL> M;


ULL tiles(int n) {
  if (M.find(n) == M.end()) {
    M[n] = tiles(n-1) + tiles(n-2);
  }
  return M[n];
}

int main() {
  int t, n;
  M[0] = 1;
  M[1] = 1;
  t = GI;
  REP(i,0,t) {
    n = GI;
    printf("%llu\n", tiles(n));
  }
  return 0;
}
