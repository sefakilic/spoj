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
  int t, na, nb;
  int a[1000];
  int b[1000];
  int ia, ib;
  int min_diff;
  
  t = GI;
  
  while(t--) {
    na = GI;
    REP(i,0,na)
      a[i] = GI;
    nb = GI;
    REP(i,0,nb)
      b[i] = GI;

    sort(a, a+na);
    sort(b, b+nb);
    ia = 0;
    ib = 0;
    min_diff = abs(a[0]-b[0]);
    
    while (true) {
      min_diff = min(min_diff, abs(a[ia]-b[ib]));
      (a[ia]<b[ib])?ia++:ib++;
      if (ia>=na || ib>=nb)
	break;
    }
    printf("%d\n", min_diff);
    
  }
  return 0;
}
