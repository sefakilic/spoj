#include <stdio.h>
#include <math.h>

typedef  unsigned long long ULL;

ULL factorize(int n) {
  int orig_n = n;
  int i;
  int sq = sqrt(n)+1;
  ULL sum = 0;
  for (i=2; i<sq; i++) {
    if (n%i == 0) {
      sum += i;
      if (n/i != i)
        sum += (n/i);
    }
  }
  return sum + 1 + n;
}  


int main() {
  int t, n;
  scanf("%d",&t);
  while(t--) {
    scanf("%d", &n);
    if (n==1)
      printf("%d\n", 1);
    else
      printf("%llu\n", factorize(n));
  }

  return 0;
}
