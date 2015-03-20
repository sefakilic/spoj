#include "stdio.h"
#include "string.h"

char number1[10];
char number2[10];
char result[20];
char op[2];

int main()
{
  long long num1, num2;
  long long res;
  int len;
  int i;
    
  while(scanf("%s %s %s", number1, op, number2) != EOF)
    {
      len = strlen(number1);
      num1 = 0;
        
      for(i = 0; i < len; ++i)
        {
	  num1 = num1 * 10 + (number1[i]-'A');
        }
        
      len = strlen(number2);
      num2 = 0;
      for(i = 0; i < len; ++i)
        {
	  num2 = num2 * 10 + (number2[i]-'A');
        }
        
      if(strcmp(op, "+") == 0)
	res = num1 + num2;
      else if(strcmp(op, "-") == 0)
	res = num1 - num2;
      else if(strcmp(op, "*") == 0)
	res = num1 * num2;
      else if(strcmp(op, "/") == 0)
	res = num1 / num2;
        
      if(res == 0) { printf("A\n"); continue; }
      if(res < 0) { printf("-"); res *= -1; }
      len = 0;
      while(res > 0)
        {
	  result[len++] = res % 10;
	  res = res / 10;
        }
      for(i = len-1; i >= 0; --i)
	printf("%c", result[i] + 'A');
      printf("\n");
    }
  return 0;
}

