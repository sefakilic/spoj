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

int stamps(vector<int> borrows, int required) {
  sort(ALL(borrows));
  reverse(ALL(borrows));

  int total = 0;
  int num_friends = 0;
  REP(i, 0, borrows.size()) {
    total += borrows[i];
    if (total >= required) {
      return i+1;
    }
  }
  return -1;
  
}
int main() {
  int t, required, num_friends;
  vi borrows;
  int res;
  
  t = GI;
  REP(i, 0, t) {
    borrows.clear();
    required = GI;
    num_friends = GI;
    REP(j, 0, num_friends)
      borrows.pb(GI);
    res = stamps(borrows, required);
    printf("Scenario #%d:\n", i+1);
    if (res != -1) {
      printf("%d\n", res);
    } else {
      printf("impossible\n");
    }
    printf("\n");
  }
  return 0;
}
