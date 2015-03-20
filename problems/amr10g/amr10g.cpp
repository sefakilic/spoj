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


int heights[20000];
int find_min_diff(int n, int k) {
  int min_diff;
  sort(heights, heights+n);
  min_diff = heights[n-1] - heights[0];
  REP(i,0,n-k+1)
    min_diff = min(min_diff, heights[i+k-1]-heights[i]);
  return min_diff;
	
}
int main() {
  int t;
  int n, k;
  t = GI;
  REP(i, 0, t) {
    n = GI;
    k = GI;
    REP(j, 0, n)
      heights[j] = GI;
    printf("%d\n", find_min_diff(n, k));
  }
  return 0;
}
