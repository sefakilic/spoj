#include "stdio.h"
#include "math.h"

#define PI acos(-1.0)

int main()
{
    int t;
    double v;
    double r;
    
    scanf("%d", &t);
    while(t--)
    {
        scanf("%lf", &v);
        r = pow( (48*v) / (129*PI), 1.0/3.0);
        printf("%d\n", (int) (9 * r / 2));
    }
    return 0;
}

