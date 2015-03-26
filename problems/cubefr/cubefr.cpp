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

#define MAX_N 1000000
int nums[MAX_N+5];

int main() {
  REP(i,1,MAX_N+1)
    nums[i] = 1;
    
  // find all cube numbers (sieve)
  REP(i, 2, 101) {
    int c = i*i*i;
    int tmp = c;
    while (tmp <= MAX_N) {
      nums[tmp] = 0;
      tmp += c;
    }
  }
  int cnt=1;
  REP(i, 1, MAX_N+1) {
    if (nums[i] > 0) {
      nums[i] = cnt++;
    }
  }

  // IO part
  int T;
  int N;
  T = GI;
  REP(i,0,T) {
    N = GI;
    printf("Case %d: ", i+1);
    // check if cube free
    if (nums[N] > 0)
      printf("%d\n", nums[N]);
    else
      printf("Not Cube Free\n");
  }
  
  return 0;
}
