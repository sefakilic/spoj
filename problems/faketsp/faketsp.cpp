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
  double x1,x2,y1,y2;
  double total = 0;
  while(getchar() != '(')
    ;
  scanf("%lf, %lf).",&x1,&y1);
  
  while(1) {
    char c = getchar();
    while (c != '(') {
      c = getchar();
      if (c==EOF)
	return 0;
    }
    scanf("%lf, %lf).",&x2,&y2);
    total += sqrt(pow(x1-x2,2) + pow(y1-y2,2));
    printf("The salesman has traveled a total of %.3lf kilometers.\n", total);
    x1=x2;
    y1=y2;
  }
  return 0;
}
