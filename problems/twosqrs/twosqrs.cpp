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

/*
Which whole numbers are expressible as sums of two (integer) squares?

Here's a theorem that completely answers the question, due to Fermat: A number N
is expressible as a sum of 2 squares if and only if in the prime factorization
of N, every prime of the form (4k+3) occurs an even number of times!
*/

bool twosqrs(LL n) {
  if (n==0)
    return false;

  for(int i=2; i<=sqrt(n)+1; i++) {
    if (n%i==0) {
      int cnt = 0;              // count number of this prime factor
      while (n%i==0) {
        n /= i;
        cnt += 1;
      }
      if (i == 3 or (i-3)%4 == 0) { // if the form (4k+3)
        if (cnt % 2)                // if not even
          return false;
      }
    }
  }
  if (n > 1 and (n==3 or (n-3)%4==0)) {
    // n is prime and in the form(4k+3)
    return false;
  }
  return true;
}

int main() {
  int N = GI;
  while (N--)
    printf("%s\n", twosqrs(GLL)?"Yes":"No");
  return 0;
}
