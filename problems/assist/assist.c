#include "stdio.h"
#define NUMBER_OF_CONTESTANTS 40000

int people[NUMBER_OF_CONTESTANTS] = {0};
int luckies[3000];

/* people who has positive integer means they are still in queue.
 * people who has 0 means processed
 */
int main()
{
  int i;
  int number_of_luckies = 0;
  int gone_for_washing = 0;
  int x, j;
  for(i = 0; i < NUMBER_OF_CONTESTANTS; ++i)
    people[i] = i+2;
    
  while(number_of_luckies < 3000)
    {
      /* select the lucky guy */
      i = 0;
      while(i < NUMBER_OF_CONTESTANTS)
        {
	  if(people[i] > 0)
            {
	      luckies[number_of_luckies++] = people[i];
	      people[i] = 0;
	      break;
            }
	  i+=1;
        }
      if(i == NUMBER_OF_CONTESTANTS) {printf("Not complete!\n"); break;}
        
        
      /* now say "GO TO KITCHEN" to every luckies[number_of_luckies-1]'th contestant.*/
      x = luckies[number_of_luckies-1];
      j = 0;
      while(i < NUMBER_OF_CONTESTANTS)
        {
	  if(people[i] > 0)
            {
	      j+=1;
	      if(j == x)
                {
		  people[i] = 0;
		  gone_for_washing += 1;
		  j = 0;
                }
            }
	  i += 1;
        }
            
    }
  while(1)
    {
      scanf("%d", &x);
      if(x==0) break;
      else printf("%d\n", luckies[x-1]);
    }
  return 0;
}
