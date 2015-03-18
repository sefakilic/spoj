#include "stdio.h"
char line[5];

int main()
{
    printf("Ready\n");
    while(1)
    {
        gets(line);
        if(line[0] == ' ' && line[1] == ' ')
            break;
            
        if( (line[0] == 'p' && line[1] == 'q') ||
            (line[0] == 'q' && line[1] == 'p') ||
            (line[0] == 'b' && line[1] == 'd') ||
            (line[0] == 'd' && line[1] == 'b') )
        printf("Mirrored pair\n");
        
        else printf("Ordinary pair\n");
    }
    
    return 0;
}
