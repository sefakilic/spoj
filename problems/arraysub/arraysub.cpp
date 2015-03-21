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

int arr[1000000];
int main() {
  int n, k;
  int max_element_index = -1;
  
  scanf("%d", &n);
  REP(i,0,n)
    scanf("%d", arr+i);
  scanf("%d", &k);

  REP(i,0,n-k+1) {
    if (i>0) printf(" ");
    // if max element of previous step is still in range
    if (max_element_index >= i) {
      if (arr[i+k-1] > arr[max_element_index])
	max_element_index = i+k-1;
    } else {
      max_element_index = max_element(arr+i, arr+i+k) - arr;
    }
    printf("%d", arr[max_element_index]);
  }
  printf("\n");

  return 0;
}
