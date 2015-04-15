#include "stdio.h"
#include "string.h"

int main()
{
  char number1[10];
  char number2[10];
  int t;
  int num1, num2;
  int len;
  int x;
  int s;
  int i;
    
  scanf("%d", &t);
  while(t--)
    {
      scanf("%s %s", number1, number2);
        
      num1 = 0;
      len = strlen(number1);
      for(i = 0; i < len; ++i)
        {
          if(number1[i] >= '2' && number1[i] <= '9')
            {
              x = number1[i] - '0';
              i += 1;
            }
          else x = 1;
            
          if(number1[i] == 'm')
            num1 += (1000*x);
          else if(number1[i] == 'c')
            num1 += (100 * x);
          else if(number1[i] == 'x')
            {
              num1 += (10 * x);
                
            }
          else
            {
              num1 += x; 
                
            }
        }
        
        
      num2 = 0;
      len = strlen(number2);
      for(i = 0; i < len; ++i)
        {
          if(number2[i] >= '2' && number2[i] <= '9')
            {
              x = number2[i] - '0';
              i += 1;
            }
          else x = 1;
            
          if(number2[i] == 'm')
            num2 += 1000*x;
          else if(number2[i] == 'c')
            num2 += 100 * x;
          else if(number2[i] == 'x')
            num2 += 10 * x;
          else
            num2 += x;
        }
        
      s = num1 + num2;
        
      if(s/1000 >= 1)
        {
          if(s / 1000 > 1) printf("%d", s / 1000);
          printf("m");
          s = s % 1000;
        }
      if(s/100 >= 1)
        {
          if(s / 100 > 1) printf("%d", s / 100);
          printf("c");
          s = s % 100;
        }
      if(s/10 >= 1)
        {
          if(s / 10 > 1) printf("%d", s / 10);
          printf("x");
          s = s % 10;
        }
      if(s > 1) printf("%d", s);
      if(s > 0) printf("i", s);
      printf("\n");
    }
  return 0;
}
