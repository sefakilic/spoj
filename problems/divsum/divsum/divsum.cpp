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

int sum_factors(int n) {
  if (n==1)
    return 0;
  
  int sum = 0;
  for (int i = 2; i < sqrt(n); ++i) {
    if (n % i == 0) {
      sum += i;
      sum += n/i;
      //printf("%d\n", i);
      //printf("%d\n", n/i);
    }
  }
  int sq = sqrt(n);
  if (sq * sq  == n)
    sum += sq;
  return sum + 1;
  
}
int main() {
  int t;
  t = GI;
  REP(i, 0, t) {
    printf("%d\n", sum_factors(GI));
  }
  return 0;
}
