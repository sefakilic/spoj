#include "stdio.h"
#include "math.h"

int pre[21] = {
1,
64,
729,
4096,
15625,
46656,
117649,
262144,
531441,
1000000,
1771561,
2985984,
4826809,
7529536,
11390625,
16777216,
24137569,
34012224,
47045881,
64000000,
85766121 };
int main()
{
    int a;
    /*
    int sqroot, cuberoot;
    for(a = 1; a <= 100000000; ++a)
    {
        sqroot = (int) pow(a, 0.5);
        cuberoot = (int) pow(a, 1/3.0);
        //printf("num = %d sq = %d cube = %d\n", a, sqroot, cuberoot);
        if( (sqroot * sqroot == a || (sqroot + 1) * (sqroot + 1) == a ) &&
            ( cuberoot * cuberoot * cuberoot == a || (cuberoot+1) * (cuberoot+1) * (cuberoot+1) == a) )
        {
            printf("%d,\n", a);
        }
    }
    */
    
    int b;
    int i;
    int cnt = 0;
    scanf("%d %d", &a, &b);
    
    for(i = 0; i < 21; ++i)
    {
        if(pre[i] >= a && pre[i] <= b)
            cnt += 1;
    }
    printf("%d\n", cnt);
    return 0;
}
