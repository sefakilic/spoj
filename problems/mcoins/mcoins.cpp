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

#define MAX_TOWER 1000050
char towers[MAX_TOWER];

int main() {
  int K, L, M;
  K = GI;
  L = GI;
  M = GI;
  // for all possible games decides who wins
  towers[1] = 'A';
  towers[K] = 'A';
  towers[L] = 'A';
  REP(i, 1, MAX_TOWER) {
    if (towers[i] != 'A') {
      towers[i] = 'B';
      towers[i+1] = 'A';
      towers[i+K] = 'A';
      towers[i+L] = 'A';
    }
  }
  REP(i, 0, M) {
    putchar(towers[GI]);
  }
  putchar('\n');
  return 0;
}
