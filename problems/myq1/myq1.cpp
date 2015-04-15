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

void find_seat(int N) {
  if (N==1) {
    printf("poor conductor\n");
    return;
  }
  N -= 2;
  int row = (N%10 < 5)? ((N/10+1)*2-1) : ((N/10+1)*2);
  char seat_pos;
  char direction;
  switch (N%10) {
  case 0:
  case 9: direction='L'; seat_pos='W'; break;
  case 1:
  case 8: direction='L'; seat_pos='A'; break;
  case 2:
  case 7: direction='R'; seat_pos='A'; break;
  case 3:
  case 6: direction='R'; seat_pos='M'; break;
  case 4:
  case 5: direction='R'; seat_pos='W'; break;
  }
  printf("%d %c %c\n", row, seat_pos, direction);
}
int main() {
  int T = GI;
  while (T--) {
    find_seat(GI);
  }
  
  return 0;
}
