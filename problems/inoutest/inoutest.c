#include "stdio.h"
int main()
{
    int n;
    int a, b;
    scanf("%d", &n);
    while(n--)
    {
        scanf("%d %d", &a, &b);
        printf("%d\n", a * b);
    }
    return 0;
}
