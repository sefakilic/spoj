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

int nimbus() {
  int w, h;
  int dp[100];
  int row[100];
  h = GI;
  w = GI;
  REP(i,0,w)
    dp[i] = GI;
  
  REP(i,1,h) {
    REP(j,0,w)
      row[j] = GI;
    REP(j,0,w)
      row[j] += max(max((j>0)?dp[j-1]:0,
		       dp[j]),
		   (j+1<w)?dp[j+1]:0);
    REP(j,0,w)
      dp[j] = row[j];
  }
  printf("%d\n", *max_element(dp, dp+w));
}

int main() {
  int t = GI;
  REP(i,0,t)
    nimbus();
  return 0;
}
