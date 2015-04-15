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

int heroes[500];

bool can_survive(int n, int m, int d) {
  int x = 0;
  sort(heroes, heroes+n);
  for (int i = n-1; i >= 0; --i) {
    x += (heroes[i]-1)/d;
    if (x >= m) break;
  }
  return (x>=m);
    
}

int main() {
  int t = GI;
  int n, m, d;
  REP(i,0,t) {
    n = GI;
    m = GI;
    d = GI;
    REP(j,0,n)
      heroes[j] = GI;
    printf("%s\n", can_survive(n,m,d)?"YES":"NO");
  }
  return 0;
}
