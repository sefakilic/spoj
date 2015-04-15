#include "stdio.h"

int main()
{
    char ch;
    while(1)
    {
        ch = getchar();
        
        if(ch == '#') break;
        switch(ch)
        {
            case ' ': printf("%%20"); break;
            case '!': printf("%%21"); break;
            case '$': printf("%%24"); break;
            case '%': printf("%%25"); break;
            case '(': printf("%%28"); break;
            case ')': printf("%%29"); break;
            case '*': printf("%%2a"); break;
            default: printf("%c", ch);
        }
    }
    return 0;
}
