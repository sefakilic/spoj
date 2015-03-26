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

typedef struct {
  int start;
  int end;
} activity;

activity activities[100000];

bool comp_activity(activity a, activity b) {
  // sort them by finishing time.
  return (a.end < b.end);
}

int busy_man() {
  int n;
  int num_done = 0;
  n = GI;
  REP(i,0,n) {
    activities[i].start = GI;
    activities[i].end = GI;
  }
  sort(activities, activities+n, comp_activity);
  REP(i, 0, n) {
    num_done += 1;
    int f = activities[i].end;
    while (i < n-1 && activities[i+1].start < f)
      i += 1;
  }
  return num_done;

}
int main() {
  int n = GI;
  REP(i,0,n)
    printf("%d\n", busy_man()); 
  
  return 0;
}
