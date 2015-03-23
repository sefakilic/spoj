#include <stdio.h>
#include <math.h>
#define PI acos(-1.0)
int main() {
  double a, b, m, n, s;
  double vx, vy;

  while(1) {
    scanf("%lf %lf %lf %lf %lf", &a, &b, &s, &m, &n);
    if(a == 0 && b == 0 && s == 0 && m == 0 && n == 0) {
      break;
    }
    vx = 2 * m * a / s;
    vy = 2 * n * b / s;
    if(vx == 0) printf("90.00 ");
    else if(vy == 0) printf("0.00 ");
    else printf("%.2lf ", atan(vy/vx)/PI*180.0);
    printf("%.2lf\n", sqrt(vx*vx + vy*vy)/2);
  }
  return 0;
}


