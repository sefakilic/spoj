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
  int c;
  int x,y,z;
  int tmpx, tmpy, tmpz;
  int n;
  int cnt = 1;  // test case counter

  while (true) {
    n = GI;
    if (n==0) break;
    // read first line, use the middle element only
    x = GI; y = GI; z = GI;
    // you can't start from x
    x = y+1;
    z = y+z; // you can move from y to z.

    // read all other lines
    REP(i,1,n) {
      tmpx = GI; tmpy = GI; tmpz = GI;
      tmpx += min(x,y);
      tmpy += min(min(x,y), min(z, tmpx));
      tmpz += min(min(y,z), tmpy);
      x = tmpx;
      y = tmpy;
      z = tmpz;
    }
    printf("%d. %d\n", cnt++, y);
  }

  return 0;
}
