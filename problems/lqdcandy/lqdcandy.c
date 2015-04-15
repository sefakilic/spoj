#include <stdio.h>
#include <math.h>

int main() {
  int T;
  long long N;
  long long init_size;
  int i;
  long long chocolate;
  int cuts;

  scanf("%d", &T);
  while(T--) {
    scanf("%lld", &N);
    i = 0;
    init_size = 1;
    while (init_size < N) {
      init_size *= 2;
      i += 1;
    }
    chocolate = init_size;
    cuts = 0;
    while (1) {
      if (N >= chocolate)
	N -= chocolate;
      if(N==0)
	break;
      chocolate /= 2;
      cuts += 1;
    }
    printf("%lld %d\n", init_size, cuts);
  }

  return 0;
}

