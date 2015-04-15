#include <stdio.h>

int gcd (int a, int b ) {
  int c;
  while ( a != 0 ) {
     c = a; a = b%a;  b = c;
  }
  return b;
}

int maximum(int* arr, int len) {
  if (len==0)
    return 0;
  int max = arr[0];
  int i;
  for (i=0; i<len; i++) {
    if (max < arr[i])
      max = arr[i];
  }
  return max;
}

int main() {
  int t, n, m, arr[1000], i, test;
  int A, B, g;
  scanf("%d", &t);
  for (test=1; test<=t; test++) {
    scanf("%d %d", &n, &m);
    for (i=0; i<m; i++) {
      scanf("%d", arr+i);
    }
    A = n - maximum(arr, m);
    B = n;
    g = gcd(A, B);
    printf("Case #%d: %d/%d\n", test, A/g, B/g);
  }
  return 0;
}
