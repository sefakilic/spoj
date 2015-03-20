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
  int N = GI;
  int x,y,z;
  int first_0 = 1; // the number of words with 0 as first letter
  int first_1 = 1; // the number of words with 1 as first letter
  int first_2 = 1; //the number of words with 0 as first letter
  REP(i,1,N) {
    x = first_0 + first_1;
    y = first_0 + first_1 + first_2;
    z = first_1 + first_2;
    first_0 = x;
    first_1 = y;
    first_2 = z;
  }
  printf("%d\n", first_0 + first_1 + first_2);
  
  return 0;
}
