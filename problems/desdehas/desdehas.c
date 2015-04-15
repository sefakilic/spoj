#include "stdio.h"
#include "string.h"
char arr[100][20];
char message[201];
int main()
{
    int M; int N; int i; int j;
    int index;
    while(1)
    {
        scanf("%d", &N);
        if(N == 0) break;
        
        scanf("%s", message);
        index = 0;
        M = strlen(message) / N;
        
        
        for(i = 0; i < M; ++i)
        {
            if(i / 2 * 2 == i)
                for(j = 0; j < N; ++j)
                    arr[i][j] = message[index++];
            else for(j = N-1; j >= 0; --j)
                    arr[i][j] = message[index++];
        }
        
        for(j = 0; j < N; ++j)
            for(i = 0; i < M; ++i)
                putchar(arr[i][j]);
        
        
        putchar('\n');
        
    }
    return 0;
}
            
