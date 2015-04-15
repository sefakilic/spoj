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

bool check() {
  int N, R;
  int I, C;
  set<pii> S;
  N = GI;
  R = GI;
  REP(i, 0, R) {
    I = GI;
    C = GI;
    S.insert(make_pair(I,C));
  }
  
  return S.size() == R;
  
}
int main() {
  int T = GI;
  REP(i, 0, T) {
    printf("Scenario #%d: %s\n", i+1, check()?"possible":"impossible");
  }
  return 0;
}
