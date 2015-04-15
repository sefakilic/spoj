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


int num_divisors(int n) {
  int cnt = 0;
  for(int i=2; i<=n; i++) {
    if (n%i == 0) {
      int tmp = i;
      for(int j=2; tmp>1; j++) {
        while(tmp%j==0) {
          cnt += 1;
          tmp /= j;
        }
      }
    }
  }
  return cnt;
}
int main() {
  int n = GI;
  cout << num_divisors(n) << endl;
  return 0;
}
