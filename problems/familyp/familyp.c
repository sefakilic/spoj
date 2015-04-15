#include "stdio.h"
char c[1000000];

int main()
{
    int i = 0;
    int t = 1;
    int j;
    while(i < 1000000)
    {
        for(j = 0; j < t; ++j)
        {
            c[i] = t;
            i+=1;
        }
        t = t + 1;
    }
    
    while(scanf("%d", &i) != EOF)
    {
        printf("TERM %d IS %c\n", i, c[i-1]-1+'A');
    }
    
    
    return 0;
}
        
