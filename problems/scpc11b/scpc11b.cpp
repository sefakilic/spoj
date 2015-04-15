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

void alaska(int n) {
  int stations[1500];
  REP(i,0,n)
    stations[i] = GI;
  sort(stations, stations+n);
  REP(i,0,n-1) {
    if (stations[i+1] - stations[i] > 200) {
      printf("IMPOSSIBLE\n");
      return;
    }
  }
  if (1422-stations[n-1] > 100)
    printf("IMPOSSIBLE\n");
  else
    printf("POSSIBLE\n");
  return;
  
}
int main() {
  int n;
  while (true) {
    n = GI;
    if (n==0) {
      break;	    
    }
    alaska(n);
  }
  
  return 0;
}
