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

vector<LL> arr;

void find_all_sqs(ULL n) {
  ULL x=0;
  int i=0;
  while(x*x<n) {
    arr.pb(x*x);
    x += 1;
  }
}

int main() {
  arr.reserve(31622777);
  find_all_sqs(1000000000000000ULL);
  LL n = GLL;
  int cnt = 0;
  for(int i=0; arr[i]<=n/2; i++) {
    if (binary_search(arr.begin(), arr.end(), n-arr[i])) {
      cnt += 1;
    }
  }
  cout << cnt << endl;
  
}
