
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

LL modpow(LL n, LL k, LL m) {
  if (n == 0)
    return 0;
  if (k == 0)
    return 1 % m;
  if (k == 1)
    return n % m;
  LL half = modpow(n, k/2, m);
  if (k%2)
    return (((half*half)%m) * n)%m;

  return (half*half)%m;
}

int main() {
  LL n, k;
  LL m = 10000007;
  while(1) {
    n = GLL; k = GLL;
    if (n==0 and k==0)
      break;
    
    printf("%lld\n", (2 * modpow(n-1, k, m) + modpow(n, k, m) +
                      2 * modpow(n-1, n-1, m) + modpow(n, n, m)) % m);
  }
}

