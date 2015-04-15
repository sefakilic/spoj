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


// The answer is 1/2 + \sum_k^n (1 / k*(k+1)*(k+2))
// http://answers.yahoo.com/question/index?qid=20110726074803AA6kXst

int main() {
  int T = GI;
  double N;
  REP(i, 0, T) {
    N = GF;
    printf("%.11lf\n", 0.5 + 0.5 * (0.5 - 1/(N+1) + 1/(N+2)));
  }
  return 0;
}
