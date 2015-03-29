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

/* Enumerate all tree nodes such that
   subtree with root n has children 2n and 2n+1.

   Guess that kth child of nth generation is M.
   if k % 2, then parent should be M.
   else parent is F.

   Move to root of the tree similarly. If 1 is M, our guess is correct.
   Otherwise, kth child of nth generation is F.
*/

bool rajesh(int n, LL k, char is_m) {
  if (n==1)
    return is_m;

  if (k%2)
    return rajesh(n-1, (k+1)/2, is_m);

  return rajesh(n-1, (k+1)/2, !is_m);
}

int main() {
  int t;
  LL n, k;

  t = GI;
  REP(i, 0, t) {
    n = GI;
    k = GLL;
    if (rajesh(n, k, true)) {
      printf("Male\n");
    } else {
      printf("Female\n");
    }
  }
  return 0;
}
