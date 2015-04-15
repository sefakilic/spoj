#include <iostream>
#include <cstring>
using namespace std;

int mod = 1000000007;
int dp[10001][101];

int f(int n, int k) {
  if (n < 0)
    return 0;
  if (n == 0)
    return 1;
  if (k == 0)
    return 0;
  if (dp[n][k] == -1) {
    dp[n][k] = (f(n-k, k) + f(n, k-1)) % mod;
  }
  return dp[n][k];
}
int main() {
  memset(dp, -1, sizeof(dp));
  int t, a, b;
  cin >> t;
  while (t--) {
    cin >> a >> b;
    cout << f(a, b) << endl;
  }
  return 0;
}
