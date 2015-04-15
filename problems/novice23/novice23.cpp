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

int sieve_eratosthenes(int a, int b) {
  // use arr to identify prime numbers between a and b
  // 1 <= a <= b <= 1000000000, b-a<=100000
  char arr[1000500];
  // 1 is not prime, so start from 2
  
  if (a == 1)
    a += 1;
  for (int i = a; i <= b; ++i) {
    arr[i-a] = 1;  //
  }
  for (int i=2; i<=(int) sqrt(b); ++i) {
    // jump to first multiple of i, such that a <= i <= b
    if (i>2 and i%2==0) // don't need to check even numbers
      i += 1;
    
    int x = 2*i;
    // fast jump to multiple of i that is larger than a
    if (x<a) {
      x = a/i*i;
      if (x<a)
	x += i;
    }
    while (x <= b) {
      arr[x-a] = 0; // not prime
      x += i;
    }
  }
  int num_primes = 0;
  // print prime numbers
  for (int i=a; i <= b; ++i) {
      if (arr[i-a])
        num_primes += 1;
  }
  return num_primes;
}

int main() {
  int t, n;
  t = GI;
  while(t--) {
    n = GI;
    cout << sieve_eratosthenes(1, n) << endl;
  }
  return 0;
}
