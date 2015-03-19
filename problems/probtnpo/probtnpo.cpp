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

int num_steps(int n) {
  int num_steps = 1;
  while (n>1) {
    if (n%2==0) n/=2;
    else n=3*n+1;
    num_steps += 1;
  }
  return num_steps;
}

int main() {
  int a, b;
  int larger, smaller;
  int max_steps;
  while (scanf("%d %d", &a, &b) != EOF) {
    smaller = min(a,b);
    larger = max(a,b);

    max_steps = 0;
    REP(i,smaller, larger+1) {
      max_steps = max(max_steps, num_steps(i));
    }
    printf("%d %d %d\n", a, b, max_steps);
  }

  return 0;
}
