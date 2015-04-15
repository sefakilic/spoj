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


int egypizza(int q, int h, int t) {
  // given number of people that want quarter, half and three quarter, return the
  // minimum number of required pizza
  int required = t;
  //printf("%d %d %d\n", q, h,t);
  q = q - t; // give remaining quarters
  required += (h/2);
  if (h%2) {
    required += 1;
    q -= 2;
  }
  if (q > 0) {
    required += (q/4);
    if (q%4)
      required += 1;
  }
  return required +1;
  
}
int main() {

  int q, h, t;
  int n;
  char inp[10];
   h = 0;
   q = 0;
   t = 0;
  n = GI;
  REP(i, 0, n) {
   
    scanf("%s", inp);

    if (strcmp(inp, "1/2") == 0)
      h += 1;
    else if (strcmp(inp, "1/4") == 0)
      q += 1;
    else if (strcmp(inp, "3/4") == 0)
      t += 1;
    else
      printf("|%s|\n", inp);
  }
  printf("%d\n", egypizza(q,h,t));
  return 0;
}
