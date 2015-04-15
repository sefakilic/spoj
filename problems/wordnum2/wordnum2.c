#include <stdio.h>

int main() {
  char c;
  scanf("%c", &c);
  if (c >= '0' && c <= '9')
    printf("number\n");
  else
    printf("word\n");
  return 0;
}
