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
  int sum;
  int len;
  int x;
  scanf("%d", &T);
  while (T--) {
    sum = 0;
    len = 0;
    scanf("%d", &N);
    for (int i = 0; i < N; ++i) {
      scanf("%d", &x);
      sum += x;
      len += 1;
    }
    printf("%d\n", (int)(sum*1.0)/len);
  }
  return 0;
}
