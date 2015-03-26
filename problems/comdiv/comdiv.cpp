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


int gcd(int a, int b) {
  if (b==0) return a;
  else return gcd(b, a%b);
}

int main() {
  int T = GI;
  int x, y;
  int g;
  REP(i, 0, T) {
    x = GI;
    y = GI;

    g = gcd(x, y);
    
    int cnt = 0; // number of common divisor
    int sq = sqrt(g);
    
    for(int i=1; i <= sq; i++) {
      if (g % i == 0)
        cnt += 2;
    }
    if (sq*sq == g)
      cnt -= 1;
    printf("%d\n", cnt);
  }
  return 0;
}
