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
  char s[1500];
  int s_len;
  int first_upper; // number of changes when first letter is uppercase
  int first_lower; // number of changes when first letter is lowercase
  while (scanf("%s", s) != EOF) {
    s_len = strlen(s);
    first_upper = 0;
    REP(i, 0, s_len) {
      if (i%2==0 && s[i] >= 'a' && s[i] <= 'z')
	first_upper++;
      if (i%2==1 && s[i] >= 'A' && s[i] <= 'Z')
	first_upper++;
    }
    first_lower = 0;
    REP(i, 0, s_len) {
      if (i%2==1 && s[i] >= 'a' && s[i] <= 'z')
	first_lower++;
      if (i%2==0 && s[i] >= 'A' && s[i] <= 'Z')
	first_lower++;
    }
    printf("%d\n", min(first_lower, first_upper));
  }
  return 0;
}

