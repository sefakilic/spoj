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
  int t, a, b, c;
  cin >> t;
  while (t--) {
    cin >> a >> b >> c;
    if (b-a == c-b)
      cout << c + c - b << endl;
    else
      cout << c * c / b << endl;
  }
  
  return 0;
}
