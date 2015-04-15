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

vector<int> find_primes(int n) {
  // Find primes less than or equal to n
  char* arr = (char*) malloc((n+1)*sizeof(char));
  memset(arr, 1, n+1); // all numbers are assumed primes.
  vector<int> primes;
  arr[0] = 0;
  arr[1] = 0;
  // even numbers
  for (int i=4; i<=n; i+=2)
    arr[i] = 0;
  for (int i=3; i<=(int) sqrt(n)+1; i+=2) {
    for (int j=2*i; j<=n; j+=i) {
      arr[j] = 0;
    }
  }
  for (int i=2; i<=n; i++) {
    if (arr[i])
      primes.push_back(i);
  }
  return primes;
}

vector<int> primes = find_primes(10000);
map<int, int> cnts;

void factorize(int n) {
  for (int i=0; i<primes.size(); ++i) {
    while (n%primes[i] == 0) {
      cnts[primes[i]] += 1;
      n /= primes[i];
    }
  }
}

int main() {
  int N = GI;
  REP(i,2,N+1) {
    factorize(i);
  }
  bool first=true;
  for(map<int,int>::iterator iter=cnts.begin(); iter!=cnts.end(); ++iter) {
    if (not first)
      printf(" * ");
    printf("%d^%d", iter->first, iter->second);
    first = false;
  }
  printf("\n");

  return 0;
}
