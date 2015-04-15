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

char arr[1000050];

int main() {
  int t;
  int n;
  t = GI;
  REP(i,0,t) {
    n = GI;
    REP(i, 0, n) {
      while (true) {
	arr[i] = getchar();
	if (arr[i] <= '9' && arr[i] >= '0')
	  break;
      }
    }
    arr[n] = '\0';
    int i = n-1;
    while (i>0 && (arr[i] <= arr[i-1]))
      i -= 1;

    if (i==0)
      printf("-1\n");
    else {
      // find smallest x from i+1 to end which is larger than c
      // guaranteed there is a larger number
      int min_index=i;
      REP(j, i+1, n) {
	if (arr[j] > arr[i-1] && arr[j] < arr[min_index])
	  min_index = j;
      }
      char c = arr[min_index];
      arr[min_index] = arr[i-1];
      arr[i-1] = c;
      sort(arr+i, arr+n);
      printf("%s\n", arr);
    }

  }
  return 0;
}
