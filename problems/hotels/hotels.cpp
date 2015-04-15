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
  int n, m;
  int arr[300000];
  LL total = 0;
  LL max_possible = 0;
  int li = 0;
  
  n = GI;
  m = GI;
  REP(i,0,n)
    arr[i] = GI;

  REP(i,0,n) {
    total += arr[i];
    while (total > m)
      total -= arr[li++];
    max_possible = max(max_possible,total);
  }
  printf("%lld\n", max_possible);
  
  return 0;
}
