#include <stdio.h>

int main() {
  long long G[1000001];
  int i, t, n;
  G[0]=1; G[1]=2;
  for(i=2; i<1000001; i++) {
    G[i] = (G[i-1] * G[i-2]) % 1000000007;
  }
  scanf("%d", &t);
  for(i=0; i<t; i++) {
    scanf("%d", &n);
    printf("%lld\n", G[n]);
  }
  return 0;
}
