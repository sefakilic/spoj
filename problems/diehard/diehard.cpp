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

int diehard(int h, int a, int current, int time) {
  // every step jump to the step that gives you max


  if (current==1 || current==2)
    return diehard(h+3, a+2, 0, time+1);

  // if you are able to choose either fire or water, it doesn't matter which one you choose.
  if (h>5 and a>10)
    return diehard(h-5, a-10, 1, time+1);
  else if (h>20 and a>0)
    return diehard(h-20, a+5, 2, time+1);

  return time;
  
}
int main() {
  int t;
  int h,a;
  t = GI;
  REP(i,0,t) {
    h = GI;
    a = GI;
    printf("%d\n", diehard(h, a, 1, 0));
  }
  return 0;
}

