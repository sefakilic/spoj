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


int main() {
  char s[10500];
  int n;
  n = GI;
  while (n--) {
    scanf("%s", s);
    int len = strlen(s);
    int num_people = 0;
    REP(i, 0, len-2) {
      if ((s[i] == '|' and s[i+1] == '0' and s[i+2] == '|') or
          (s[i] == '/' and s[i+1] == '0' and s[i+2] == '/') or
          (s[i] == '\\' and s[i+1] == '0' and s[i+2] == '\\') or
          (s[i] == '\\' and s[i+1] == '0' and s[i+2] == '/')) {
        num_people += 1;
        i += 2;
      }
    }
    if (num_people)
      cout << num_people << endl;
    else
      cout << "That Bad Party xD" << endl;

  }
  return 0;
}
