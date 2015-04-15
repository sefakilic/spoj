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


int totient(int n) {
  //http://en.wikipedia.org/wiki/Euler%27s_totient_function#Computing_Euler.27s_function
  LL nom = n, den = 1;
  for(int i=2; i*i <= n; i++) {
    if (n % i == 0) {
      nom *= (i-1);
      den *= (i);
      while (n%i == 0) n /= i;
    }
  }
  if (n > 1) { nom *= (n-1); den *= n;}
  return nom / den;
}


int main() {
  int T = GI;
  REP(i,0,T)
    printf("%d\n", totient(GI));
  return 0;
}
