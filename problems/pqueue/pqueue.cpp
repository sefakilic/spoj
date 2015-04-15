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

void print() {
  int n, m;
  int tmp;
  int minutes = 0;
  queue<int> print_queue;
  priority_queue<int> priorities;
  n = GI;
  m = GI;
  REP(i,0,n) {
    tmp = GI;
    print_queue.push(tmp);
    priorities.push(tmp);
  }
  while (true) {
    if (print_queue.front() == priorities.top()) {
      // print element
      print_queue.pop();
      priorities.pop();
      minutes += 1;
      if (m==0) { // if that was my print job
	printf("%d\n", minutes);
	return;
      }
    } else {
      // add first element to last of the queue
      print_queue.push(print_queue.front());
      print_queue.pop();
    }
    
    m -= 1;  // my job is one closer
    if (m<0)
      m += print_queue.size();
  }
}

int main() {
  int T = GI;
  REP(i, 0, T)
    print();
  return 0;
}
