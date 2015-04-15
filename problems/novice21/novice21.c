#include <stdio.h>
typedef unsigned long long ULL;

ULL num_divisibles(ULL a, ULL b, ULL n) {
  if (a%n) {
    a = a/n*n+n;
  }
  if (b%n) {
    b = b/n*n;
  }
  if (a==b)
    return 1;
  if (a>b)
    return 0;
  return (b-a)/n+1;
}

int main() {
  ULL t, a, b, n;
  ULL i;
  scanf("%llu", &t);
  for (i=0; i<t; i++) {
    scanf("%llu %llu %llu", &a, &b, &n);
    printf("%llu\n", num_divisibles(a, b, n));
  }
  return 0;
}
