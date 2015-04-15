#include <stdio.h>
#include <math.h>

void factorize(int n) {
  int cnt = 0;
  int orig_n = n;
  printf("%d = ", n);
  int i;
  int sq = sqrt(n)+1;
  int num_constructions = 1;
  for (i=2; n>1 && i<sq; i++) {
    cnt = 0;
    while (n%i == 0) {
      printf("%d", i);
      n /= i;
      cnt += 1;
      if (n>1)
        printf(" * ");
    }
    num_constructions *= (cnt + 1);
  }
  if (n>1) {
    printf("%d", n);
    num_constructions *= 2;
  }
  printf("\n");
  printf("With %d marbles, %d different rectangles can be constructed.\n",
         orig_n, (num_constructions+1)/2);
}  


int main() {
  int n;
  while (1) {
    scanf("%d", &n);
    if (n==0) break;
    factorize(n);
  }
  return 0;
}
