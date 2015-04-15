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
  int t;
  int n;
  LL en;
  LL min_en;
  t = GI;
  REP(i,0,t) {
    n = GI;
    en = 0;
    min_en = 0;
    REP(j,0,n) {
      en += GI;
      min_en = min(min_en, en);
    }
    printf("Scenario #%d: %lld\n", i+1, (min_en <= 0)?(-min_en + 1):min_en);
  }
  return 0;
}
