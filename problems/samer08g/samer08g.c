#include <stdio.h>
int main() {
  int t;
  int init[1001];
  int num, rel;
  int i = 0;
  int j;
  int defective;
  while(1) {
    scanf("%d", &t);
    if(t == 0) break;
    defective = 0;
    for(i = 1; i <= t; ++i)
      init[i] = -1;
    for(i = 1; i <= t; ++i) {
      scanf("%d %d", &num, &rel);
      if (defective) continue;
      if (i + rel <= 0 || i + rel > t) {
	defective = 1;
	continue;
      }
      if (init[i+rel] != -1) {
	defective = 1;
	continue;
      }
      else init[i+rel] = num;
    }
    if(defective) {
      printf("-1\n");
      continue;
    }
    for(i = 1; i <= t; ++i) {
      printf("%d ", init[i]);
    }
    printf("\n");
  }
  return 0;
}


