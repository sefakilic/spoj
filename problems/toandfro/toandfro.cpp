#include <iostream>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <numeric>
#include <cstdio>
#include <cmath>
#include <cstdlib>
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

char matrix[250][250];

void toandfro(string s, int num_cols) {
  bool forward = true;
  int x = 0;
  int y = 0;
  REP(i, 0, s.length()) {
    matrix[x][y] = s[i];
    if (forward)
      y += 1;
    else
      y -= 1;
    if (y == num_cols) {
      y = num_cols-1;
      x += 1;
      forward = false;
    }
    if (y==-1) {
      y = 0;
      x += 1;
      forward = true;
    }
  }
  REP(j, 0, num_cols) {
    REP(i, 0, x) {
      putchar(matrix[i][j]);
    }
  }
  putchar('\n');
    
}

int main() {
  string s;
  int n;
  while (true) {
    n = GI;
    if (n == 0)
      break;
    cin >> s;
    toandfro(s, n);
  }
  return 0;
}
