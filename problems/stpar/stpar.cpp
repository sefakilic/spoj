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
  int n;
  stack<int> first;
  stack<int> second;
  while (1) {
    n = GI;
    if (n==0) break;
    while (!first.empty())
      first.pop();
    while (!second.empty())
      second.pop();

    REP(i,0,n)
      second.push(GI);
    while(!second.empty()) {
      first.push(second.top());
      second.pop();
    }

    int last = 0;
      // loop invariant: at this point, second stack is always empty
    while (last < n) {
      while (!second.empty() and second.top() == last+1) {
	last = second.top();
	second.pop();
      }
      while (!first.empty() and first.top() != last+1) {
	second.push(first.top());
	first.pop();
      }
      if (first.empty())
	break;
      else {
	last = first.top();
	first.pop();
      }
    }
    if (last==n) {
      printf("yes\n");
    } else {
      printf("no\n");
    }
  }
  return 0;
}
