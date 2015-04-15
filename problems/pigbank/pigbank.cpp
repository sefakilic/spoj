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

void piggy() {
  // Dynamic programming
  // M[w] = \min M[w-w_x] + P_x
  int E; // weight of empty pig
  int F; // weight of full pig
  int N; // number of various coins
  int P[500]; // values of coins
  int W[500]; // weights of coins
  int M[10500]; // DP table
  E = GI;
  F = GI;
  N = GI;
  REP(i,0,N) {
    P[i] = GI;
    W[i] = GI;
  }
  // initialize DP table
  REP(i,0,F-E+1)
    M[i] = 0;
  REP(i,0,N) {
    if (M[W[i]]==0)
      M[W[i]] = P[i];
    else
      M[W[i]] = min(M[W[i]], P[i]);
  }
  
  REP(i,0,F-E+1) {
    REP(j,0,N) {
      if (i >= W[j] && M[i-W[j]] != 0) {
        if (M[i]==0)
          M[i] = M[i-W[j]] + P[j];
        else 
          M[i] = min(M[i], M[i-W[j]] + P[j]);
      }
    }
  }
  if (M[F-E]) {
    printf("The minimum amount of money in the piggy-bank is %d.\n", M[F-E]);
  } else {
    printf("This is impossible.\n");
  }
}

int main() {
  int T = GI;
  REP(i,0,T)
    piggy();
  return 0;
}
