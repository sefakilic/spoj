#include "stdio.h"
#include "string.h"

char word[101];

int main()
{
  int len;
  int type;
  int i;
  while(scanf("%s", word) != EOF)
    {
      len = strlen(word);
      /*printf("word: %s\n", word);*/
      type = 0; /* not assigned yet.
		 * 1 means c++
		 * 2 means java
		 */
      if( (word[0] >= 'A' && word[0] <= 'Z') ||
	  (word[len-1] == '_') ||
	  (word[0] == '_') )
        {
	  printf("Error!\n");
	  continue;
        }
      for(i = 0; i < len; ++i)
        {
	  if(word[i] >= 'A' && word[i] <= 'Z')
            {
	      if(type == 0)
		type = 2;
	      else if(type == 2) ;
	      else if(type == 1) break;
            }
	  else if(word[i] == '_')
            {
	      if( i < len-1 && word[i+1] =='_') break;
	      if(type == 0)
		type = 1;
	      else if(type == 2) break;
	      else if(type == 1) ;
            }
        }
      if(i < len)
        {
	  printf("Error!\n");
	  continue;
        }
        
      /* printf("type: %d\n", type);*/
      if(type == 0)
	printf("%s\n", word);
        
      else if(type == 1)
        {
	  for(i = 0; i < len; ++i)
            {
	      if(word[i] == '_' )
                {
                    
                    
		  i += 1;
		  putchar(word[i] + ('A' - 'a'));
                    
             
                }
	      else putchar(word[i]);
            }
	  putchar('\n');
        }
      else if(type == 2)
        {
	  for(i = 0; i < len; ++i)
            {
	      if(word[i] >= 'A' && word[i] <= 'Z')
                {
		  putchar('_');
		  putchar(word[i] + 'a' - 'A');
                }
	      else putchar(word[i]);
            }
	  putchar('\n');
        }
    }
  return 0;
}
        
            
