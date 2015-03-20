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
  int a, b;
  int mid;
  string response;
  cin >> a >> b;
  while (1) {
    mid = (a+b)/2;
    cout << mid << endl;
    fflush(stdout);
    cin >> response;
    if (response == "WIN")
      break;
    if (response == "HIGH")
      b = mid-1;
    else
      a = mid+1;
  }
  
  return 0;
}
