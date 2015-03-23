#include "stdio.h"
#include "string.h"
int main()
{
  char str[10];
  char str2[10];
  int from;
  int to;
  int number;
  int i;
  int len;
  int x;
  while(scanf("%s %d %d", str, &from, &to) != EOF)
    {
      number = 0;
      len = strlen(str);
      i = len - 1;
      if(str[i] >= '0' && str[i] <= '9')
	number = str[i] - '0';
      else number = str[i] - 'A' + 10;
      x = 1;
      for(i = len-2; i >= 0; --i)
        {
	  x = x * from;
	  if(str[i] >= '0' && str[i] <= '9')
	    number += x * (str[i] - '0');
	  else number += x * (str[i] - 'A' + 10);
        }
        
        
      for(i = 0; i < 7; ++i)
	str2[i] = ' ';
      str2[7] = 0;
      for(i = 6; i >= 0; --i)
        {
	  if(number == 0) break;
	  x = number % to;
	  if(x <= 9)
	    str2[i] = '0' + x;
	  else str2[i] = 'A' + x - 10;
	  number = number / to;
        }
        
      if(number > 0) printf("  ERROR\n");
      else printf("%s\n", str2);
            
        
    }
    
  return 0;
}
