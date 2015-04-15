#include <stdio.h>
int main() {
  int r, b;
  int sum;
  int l;
 
  scanf("%d %d", &r, &b);
  sum = r + b;
	 
  l = 2;
  while(sum / l * l != sum || sum/l + l != r/2 + 2)
    l += 1;
  printf("%d %d\n", sum/l, l);
  return 0;
}
 
