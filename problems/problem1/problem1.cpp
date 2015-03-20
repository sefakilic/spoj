#include <iostream>
using namespace std;
main() {
  int t, n;cin >> t;while (t--) {cin >> n;if (n <= 0) {cout << "NOT POSSIBLE" << endl;continue;}for (int i = n-1; i > 0; --i)cout << i << " ";cout << "0\n";}return 0;}
