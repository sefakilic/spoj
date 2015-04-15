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

int nums[50500];

int main() {
  // Sort numbers and try to divide it into two lists where no element is repeated
  int t = GI;
  int n;

  while (t--) {
    n = GI;
    REP(i,0,n) {
      nums[i] = GI;
    }
    sort(nums, nums+n);
    int first_list_last_elm = -1;
    int second_list_last_elm = -1;
    bool can_do = true;
    if (n==1)
      can_do = false;
    
    REP(i,0,n) {
      if (first_list_last_elm < nums[i]) {
	first_list_last_elm = nums[i];
      } else if (second_list_last_elm < nums[i]) {
	second_list_last_elm = nums[i];
      } else {
	can_do = false;
	break;
      }
    }
    printf("%s\n", can_do?"YES":"NO");
  }
  return 0;
}
