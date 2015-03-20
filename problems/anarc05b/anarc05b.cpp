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
  int n, m;
  int first[10000];
  int second[10000];
  int first_sum;
  int second_sum;
  int total;
  int ia, ib;
  while (1) {
    n = GI;
    if (n==0) break;
    REP(i,0,n)
      first[i] = GI;
    m = GI;
    REP(i,0,m)
      second[i] = GI;
    first_sum = 0;
    second_sum = 0;
    ia = 0;
    ib = 0;
    total = 0;
    while (ia < n && ib < m) {
      if (first[ia] < second[ib])
	first_sum += first[ia++];
      else if (first[ia] > second[ib])
	second_sum += second[ib++];
      else {
	total += max(first_sum, second_sum);
	total += first[ia];
	ia++;
	ib++;
	first_sum = 0;
	second_sum = 0;
      }
    }

    while (ia<n)
      first_sum += first[ia++];
    while (ib<m)
      second_sum += second[ib++];
    total += max(first_sum, second_sum);
    printf("%d\n", total);
  }
  return 0;
}
