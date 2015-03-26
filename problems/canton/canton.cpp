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

int main(int argc, char *argv[]) {
  int n;
  int r;
  int x;
  int num;
  scanf("%d", &num);
  while(num--) {
    scanf("%d", &n);
    r = sqrt(2*n) - 1;
    while ((r+1)*(r+2)/2 < n)
      r = r+1;

    //printf("r=%d\n", r);
    printf("TERM %d IS ", n);
    if (r % 2 == 0) {
      x = n - (r*(r+1)/2);
      printf("%d/%d\n", r+2-x, x);
    }
    else {
      x = n - (r*(r+1)/2);
      printf("%d/%d\n", x, r+2-x);
    }
  }
  return 0;
}
