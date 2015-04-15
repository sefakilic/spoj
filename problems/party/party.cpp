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

#define MAX_PARTIES 100
#define MAX_BUDGET 500

typedef struct {
  int cost;
  int fun;
} party;

party parties[MAX_PARTIES];

typedef struct {
  int total_fun;
  // total cost is implicit, the index of the array
  int attended[MAX_PARTIES];
} cell;

cell DP[MAX_BUDGET+1];

void throw_party(int b, int n) {
  int budget = b;
  int num_parties = n;
  REP(i,0,num_parties) {
    parties[i].cost = GI;
    parties[i].fun = GI;
  }
  // cleanup
  REP(i, 0, budget+1) {
    DP[i].total_fun = 0;
    REP(j, 0, num_parties)
      DP[i].attended[j] = 0;
  }
  REP(i, 1, budget+1) {
    REP(j, 0, num_parties) {
      if (i >= parties[j].cost &&
          DP[i-parties[j].cost].attended[j] == 0 && // not already attended
          DP[i].total_fun < DP[i-parties[j].cost].total_fun + parties[j].fun) {
        DP[i].total_fun = DP[i-parties[j].cost].total_fun + parties[j].fun;
        // copy attended parties 
        REP(k, 0, num_parties)
          DP[i].attended[k] = DP[i-parties[j].cost].attended[k];
        // attend this one
        DP[i].attended[j] = 1;
      }
    }
  }
  int most_fun = 0, cost_fun = 0;
  REP(i, 1, budget+1)
    if (DP[i].total_fun > most_fun) {
      most_fun = DP[i].total_fun;
      cost_fun = i;
    }
  printf("%d %d\n", cost_fun, most_fun);
}

int main() {
  int b, n;
  while (true) {
    b = GI;
    n = GI;
    if (b==0 && n==0)
      break;
    throw_party(b, n);
  }
  
  return 0;
}
