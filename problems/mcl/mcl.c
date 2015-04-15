#include "stdio.h"
#include "string.h"
int arr[26];
char line[1026];

int main()
{
    
    int i;
    int m;
    int mindex;
    while( gets(line) )
    {
        
        for(i = 0; i < 26; ++i)
            arr[i] = 0;
        
        i = 0;
        while( line[i] != 0)
        {
            if(line[i] >= 'a' && line[i] <= 'z')
            {
                arr[line[i] - 'a'] += 1;
            }
            else if(line[i] >= 'A' && line[i] <= 'Z')
            {
                arr[line[i] - 'A'] += 1;
            }
            i += 1;
        }
        m = -1;
        mindex = -1;
        i = 0;
        for(i = 0; i < 26; ++i)
        {
            if(arr[i] > m)
            {
                m = arr[i];
                mindex = i;
            }
        }
        
        printf("%c %d\n", mindex + 'A', m);
    }
    return 0;
}
        
        
        
        
        
