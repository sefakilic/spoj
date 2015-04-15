#include <stdio.h>

int min(int a, int b) {
  if (a<b)
    return a;
  return b;
}

int main() {
  int n, m; // m: max_element
  int i;
  int tmp;
  while (1) {
    scanf("%d", &n);
    if (n==0) break;
    scanf("%d", &m);
    for(i=1; i<n; i++) {
      scanf("%d", &tmp);
      m = min(m, tmp);
    }
    printf("%d\n", m);
  }
  
  return 0;
}
