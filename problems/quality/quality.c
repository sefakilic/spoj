#include "stdio.h"
int a[3];
int b[3];

int main()
{
    int solved;
    int penalty;
    int team = 0;
    int i;
    while(scanf("%d %d %d %d %d %d", a, a+1, a+2, b, b+1, b+2) != EOF)
    {
        team += 1;
        solved = 0;
        penalty = 0;
        
        for(i = 0; i < 3; ++i)
        {
            if(a[i] > 0)
            {
                solved += 1;
                penalty += a[i];
            }
        }
        for(i = 0; i < 3; ++i)
        {
            if(a[i] > 0)
            {
                penalty += (1200 * (b[i]-1));
            }
        }
        
        printf("team %d: %d, %d\n", team, solved, penalty);
    }
    return 0;
}
        
        
        
            
        
