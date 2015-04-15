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
  int t;
  int n,a,b,c;
  ULL cnt;
  t = GI;
  while (t--) {
    n = GI; a = GI; b = GI; c = GI;
    cnt = 0;
    REP(i,0,a+1) {
      if (i>n)
        break;
      REP(j,0,b+1) {
        if (i+j>n)
          break;
        REP(k,0,c+1) {
            if (i+j+k > n)
              break;
            cnt += 1;
        }
      }
    }
    cout << cnt << endl;
  }
  return 0;
}
C
