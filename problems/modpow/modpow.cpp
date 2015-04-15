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
#define GULL ({ULL t; scanf("%llu", &t); t;})
#define REP(i,a,b) for(int i=a; i<b; i++)
#define ALL(v) (v).begin(), (v).end()
#define pb push_back
#define INF (int)1e9
#define EPS (double) (1e-9)
#define PI (3.141592653589793)

ULL modpow(ULL a, ULL b, ULL c) {
  if (b == 0)
    return 1;
  if (b == 1)
    return a % c;
  ULL half = modpow(a, b/2, c);
  if (b%2)
    return (half*half*a) % c;
  return (half*half)%c;
}

int main() {
  int t = GI;
  ULL a, b, c;
  REP(i,0,t) {
    a = GULL; b = GULL; c = GULL;
    printf("%llu\n", modpow(a,b,c));
  }
  return 0;
}
