#include <iostream>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <numeric>
#include <cstdio>
#include <cmath>
#include <cstdlib>
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

void sieve_eratosthenes(int a, int b) {
  // use arr to identify prime numbers between a and b
  // 1 <= a <= b <= 1000000000, b-a<=100000

  char arr[100050];
  
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
  // print prime numbers
  for (int i=a; i <= b; ++i) {
      if (arr[i-a])
	printf("%d\n", i);
  }
}

int main() {
  int t;
  int a, b;
  scanf("%d", &t);
  while (t--) {
    scanf("%d", &a);
    sieve_eratosthenes(1,a);
    if (t)
      printf("\n");
  }
  
  return 0;
}
