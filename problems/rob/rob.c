#include "stdio.h"


int main()
{
    int bandits[100];
    int n;
    int k;
    int t;
    int given;
    int next;
    int who;
    int i;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d %d", &n, &k);
        
        for(i = 0; i < k; ++i)
            bandits[i] = 0;
        given = 0;
        next = 1;
        who = 0;
        while(1)
        {
            if(given + next > n)
            {
                bandits[who] += (n - given);
                break;
            }
            else
            {
                given = given + next;
                bandits[who] += next;
                next = next+1;
                who = (who+1) % k;
            }
        }
        
        for(i = 0; i < k; ++i)
        {
            printf("%d ", bandits[i]);
        }
        printf("\n");
    }
    
    return 0;
}
            
    
