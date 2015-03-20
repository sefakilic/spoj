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
  int T, N;
  string str;
  cin >> T;
  while (T--) {
    cin >> N;
    if (N == 1) {
      cout << "2" << endl;
      continue;
    }
    str = "";
    while (N > 0) {
      N -= 1;
      switch (N % 4) {
      case 0: str.push_back('2'); break;
      case 1: str.push_back('3');  break;
      case 2: str.push_back('5');  break;
      case 3: str.push_back('7');  break;
      }
      N /= 4;
    }
    reverse(str.begin(), str.end());
    cout << str << endl;
  }
  
  return 0;
}
