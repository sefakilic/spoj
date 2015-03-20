#include "stdio.h"
int main()
{
    int T;
    int prev;
    int now;
    int v;
    int total;
    int i;
    
    while(1)
    {
        scanf("%d", &T);
        if(T == -1) break;
        total = 0;
        prev = 0;
        for(i = 0; i < T; ++i)
        {
            scanf("%d %d", &v, &now);
            total = total + (now - prev) * v;
            prev = now;
        }
        printf("%d miles\n", total);
    }
    return 0;
}
        

