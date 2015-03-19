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

int M[2001][2001];
int knapsack(int maxw, int n, int vs[], int ws[]) {
  REP(j,0,maxw+1)
    M[0][j] = 0;
  REP(i,0,n) {
    REP(j,0,maxw+1) {
      if (ws[i] <= j) {
        M[i+1][j] = max(M[i][j], M[i][j-ws[i]] + vs[i]);
      } else {
        M[i+1][j] = M[i][j];
      }
    }
  }
  return M[n][maxw];
}

int main() {
  int s, n;
  int ws[2000], vs[2000];
  s = GI; n = GI;
  REP(i,0,n) {
    ws[i] = GI;
    vs[i] = GI;
  }
  cout << knapsack(s, n, vs, ws) << endl;
  return 0;
}
