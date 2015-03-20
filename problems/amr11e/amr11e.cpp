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

int num_factors (int n) {
  int factor = 2;
  int factor_count = 0;
  while (n > 1) {
    if (n%factor == 0) {
      factor_count += 1;
      while (n%factor == 0)
	n /= factor;
    }
    if (factor_count>=3) break;
    factor += 1;
  }
  return factor_count;
}
int main() {
  int i = 30;
  int cnt = 0;
  int pre_comp[1000];
  while (cnt < 1000) {
    if (num_factors(i) >= 3) {
      pre_comp[cnt++] = i;
    }
    i += 1;
  }
  int t;
  t = GI;
  REP(i,0,t)
    printf("%d\n", pre_comp[GI-1]);
  return 0;
}
