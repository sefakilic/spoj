#include "stdio.h"
int arr[500];
int main()
{
    int arrsize = 0;
    int num = 1;
    int ones;
    int tmp;
    
    while(arrsize < 500)
    {
        tmp = num;
        ones = 0;
        
        while(tmp > 1)
        {
            if(tmp / 2 * 2 != tmp)
            {
                ones += 1;
                
            }
            tmp /= 2;
            
        }
        ones += 1;
        
        if(ones / 2 * 2  != ones)
        {
            arr[arrsize++] = num;
        }
        num += 1;
    }
    int T;
    int x;
    
    scanf("%d", &T);
    while(T--)
    {
        scanf("%d", &x);
        printf("%d\n", arr[x-1]);
    }
    return 0;
}
    
