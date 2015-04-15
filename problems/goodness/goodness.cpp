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


int len(int x) {
  // find the number of digits of x
  int l = 0; 
  while (x >= 10) {
    l += 1;
    x /= 10;
  }
  return l+1;
}

int main() {
  int t;
  int a, b;
  int ret;
  t = GI;
  REP(i,0,t) {
    a = GI; b = GI;
    ret = 0;
    REP(j, a, b+1) {
      ret = (ret + j*len(j)) % 1000000007;
    }
    printf("%d\n", ret);
  }
  return 0;
}
