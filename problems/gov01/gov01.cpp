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

map<int, LL> M;
LL fibonacci_fast(int n, int m) {
  /*
    Fibonacci mod m.
    F(2k)   = F(k) * [2F(k+1) - F(k)]
    F(2k+1) = F(k+1)**2 + F(k)**2
  */
  if (n==1 or n==2)
    return 1;
  if (M.find(n) == M.end()) {
    LL a = fibonacci_fast(n/2, m);
    LL b = fibonacci_fast(n/2+1, m);
    if (n%2 == 0)
      M[n] = (a*(2*b-a))%m;
    else
      M[n] = (a*a + b*b)%m;
  }
  return M[n];
}

int main() {
  int t;
  int n, m;
  t = GI;
  while(t--) {
    n = GI; m = GI;
    M.clear();
    M[1] = 1; M[2] = 1;
    cout << (fibonacci_fast(n+4, m)-3+m)%m << endl;
  }
  return 0;
}
