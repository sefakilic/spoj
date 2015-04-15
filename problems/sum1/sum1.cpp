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
  int T;
  LL N;
  LL x,y,z;
  T = GI;
  REP(i,0,T) {
    // sum of multiples of 3 +
    // sum of multiples of 5 -
    // sum of multiples of 15
    N = GLL;
    N -= 1;
    x = N/3;
    y = N/5;
    z = N/15;
    printf("%lld\n", 3*x*(x+1)/2 + 5*y*(y+1)/2 - 15*z*(z+1)/2);
  }
  return 0;
}
