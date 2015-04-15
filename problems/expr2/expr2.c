#include <stdio.h>
int main() {
  int t,a,b,d;
  char c;
  scanf("%d",&t);
  while(t--) {
    scanf("%d%c%d", &a, &c, &b);
    if (c == '*')
      d = a*b;
    if (c == '+')
      d = a+b;
    if (c == '-')
      d = a-b;
    printf("%d\n", d);
  }
  return 0;
}
