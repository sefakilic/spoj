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

LL M[5050];

int my_atoi(char t, char o) {
  // t * 10  + o
  return (t-'0') * 10 + (o-'0');
}

LL DP(char* s) {
  // Let M[i] be the number of decodings that can be given for string s[1 .. i]
  // The rule is M[i] = M[i-1] + I(S[i-2]*10 + S[i-1] <= 26) * M[i-2]
  int s_len = strlen(s);
  if (s_len == 1) return 1;
  M[1] = 1;
  // first pos is guaranteed not to be 0.
  M[2] = 0;
  if (s[1] > '0') M[2] += 1;
  if (s[0] == '1' || (s[0]=='2' && s[1] <= '6')) M[2] += 1;
  REP(i, 3, s_len+1) {
    M[i] = 0;
    if (s[i-1] > '0') M[i] += M[i-1];
    if (s[i-2] == '1' || (s[i-2]=='2' && s[i-1] <= '6')) M[i] += M[i-2];
  }
  return M[s_len];

}

int main() {
  char s[5050];
  while (true) {
    scanf("%s", s);
    if (s[0]=='0') break; // end of input
    printf("%lld\n", DP(s));
  }
  return 0;
}
