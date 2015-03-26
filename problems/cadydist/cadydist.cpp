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

bool cmpa(int i, int j) { return (i<j); }
bool cmpb(int i, int j) { return (i>j); }

LL class_size[100050];
LL candy_prices[100050];

int main() {
  int N;

  while (true) {
    N = GI;
    if (N==0) break;
    REP(i,0,N)
      class_size[i]= GLL;
    REP(i,0,N)
      candy_prices[i] = GLL;
    sort(candy_prices,candy_prices+N, cmpa);
    sort(class_size,class_size+N, cmpb);
    LL total = 0;
    REP(i,0,N)
      total += (class_size[i]*candy_prices[i]);
    printf("%lld\n", total);
  }
  
  return 0;
}
