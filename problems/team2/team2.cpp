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

LL pack(LL a[4]) {
  LL m = a[0] + a[1] + a[2] + a[3]; // 4x1
  // 3x1
  // A B C
  // D
  m = min(m, max(max(a[0]+a[1]+a[2], a[3]), //one side
                 max(max(a[0], a[1]), a[2]) + a[3])); // the other side
  // A B D
  // C
  m = min(m, max(max(a[0]+a[1]+a[3], a[2]), //one side
                 max(max(a[0], a[1]), a[3]) + a[2])); // the other side

  // A C D
  // B
  m = min(m, max(max(a[0]+a[2]+a[3], a[1]), //one side
                 max(max(a[0], a[2]), a[3]) + a[1])); // the other side

  // B C D
  // A
  m = min(m, max(max(a[1]+a[2]+a[3], a[0]), //one side
                 max(max(a[1], a[2]), a[3]) + a[0])); // the other side
  
  // 2x2
  // A B
  // C D
  m = min(m, max(max(a[0]+a[1], a[2]+a[3]), // one side
                 max(a[0], a[1]) + max(a[2],a[3]))); // the other side
  // A C
  // B D
  m = min(m, max(max(a[0]+a[2], a[1]+a[3]), // one side
                 max(a[0], a[2]) + max(a[1],a[3]))); // the other side
  // A D
  // B C
  m = min(m, max(max(a[0]+a[3], a[1]+a[2]), // one side
                 max(a[0], a[3]) + max(a[1],a[2]))); // the other side

  return m;
}
int main() {
  LL A[4];
  int c = 1;
  while (scanf("%lld %lld %lld %lld", A, A+1, A+2, A+3) != EOF) {
    printf("Case %d: %lld\n", c++, pack(A));
  }
  
  return 0;
}
