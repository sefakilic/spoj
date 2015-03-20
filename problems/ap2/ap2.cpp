#include <stdio.h>

void find_series(long long three_term, long long three_last_term, long long total) {
  long long N; // length of series
  long long K; // increment
  if (three_term == three_last_term) {
    N = total / three_term;
    K = 0;
  } else {
    N = 2 * total / (three_term + three_last_term);
    K = (three_last_term - three_term) / (N-5);
  }

  printf("%lld\n", N);
  for (long long i = 0; i < N; ++i) {
    if (i > 0) {
      printf(" ");
    }
    printf("%lld", three_term + (i-2)*K);
  }
  printf("\n");
}

int main() {
  long long N, three_term, three_last_term, total;
  scanf("%lld", &N);
  for (long long int i = 0; i < N; ++i) {
    scanf("%lld %lld %lld", &three_term, &three_last_term, &total);
    find_series(three_term, three_last_term, total);
  }
  return 0;
}
