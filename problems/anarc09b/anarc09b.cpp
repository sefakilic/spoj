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

vector<int> factorize(int n) {
  vector<int> primes = find_primes(n);
  vector<int> factors;
  for (int i=0; i<primes.size(); ++i) {
    while (n%primes[i] == 0) {
      factors.push_back(primes[i]);
      n /= primes[i];
    }
  }
  return factors;
}

long long LCM(int a, int b) {
  vector<int> fa = factorize(a);
  vector<int> fb = factorize(b);
  vector<int> lcm(fa.size() + fb.size());
  vector<int>::iterator it;
  
  it = set_union(fa.begin(), fa.end(), fb.begin(), fb.end(), lcm.begin());
  lcm.resize(it-lcm.begin());
  long long x = 1;
  for (int i=0; i<lcm.size(); ++i) {
    x *= lcm[i];
  }
  return x;
}

int main(int argc, char *argv[]) {
  int a, b;
  unsigned long long lcm;
  while (true) {
    scanf("%d %d", &a, &b);
    if (a == 0 and b == 0)
      break;
    lcm = LCM(a,b);
    printf("%llu\n", lcm / a  * lcm / b);
  }
  
  return 0;
}

