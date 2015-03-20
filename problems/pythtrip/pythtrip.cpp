#include "stdio.h"
#include "math.h"
int main()
{
    int n;
    int a, b, c;
    
    scanf("%d", &n);
    while(n--)
    {
        scanf("%d %d", &a, &b);
        c = sqrt(a * a + b * b);
        if(c*c == a*a + b*b)
            printf("YES %d\n", c);
        else printf("NO\n");
    }
    return 0;
}
