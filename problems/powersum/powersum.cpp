#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <algorithm>
#include <utility>
#include <cmath>
#include <stdio.h>
#include <string.h>

using namespace std;

typedef vector<int> vi;
typedef vector<string> vs;
typedef long long ll;
typedef pair<int, int> pii;

const double PI = 3.141592653589793238462;

int main(int argc, char *argv[]) {
  int T;
  int N;
  ll sum;
  ll x;
  ll mod = 1000000000 + 7;
  scanf("%d", &T);
  while (T--) {
    scanf("%d", &N);
    sum = 0;
    for (int i = 0; i < N; ++i) {
      scanf("%lld", &x);
      sum = (sum + x) % mod;
    }
    // calc 2^(N-1)
    for (int i = 0; i < N-1; ++i) {
      sum = (sum * 2) % mod;
    }
    printf("%lld\n", sum);
  }
  return 0;
}
