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

int treats[2000];
int num_treats;
int memoize[2001][2001] = {0};

int f(int ia, int ib) {
  if(ib-ia == 1)
    return num_treats * treats[ia];

  if (!memoize[ia][ib]) {
    int age = num_treats-(ib-ia)+1;
    memoize[ia][ib] = max(age*treats[ia] + f(ia+1, ib),
                          f(ia, ib-1) + age*treats[ib-1]);
  }
  return memoize[ia][ib];
}

int main() {
  num_treats = GI;
  REP(i, 0 , num_treats)
    treats[i] = GI;
  printf("%d\n", f(0, num_treats));
  return 0;
}
