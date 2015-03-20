#include <iostream>
#include <algorithm>
using namespace std;
int b[50000];
int m[50000];


int main()
{
  int T;
  int B;
  int M;
    
  int i;
  int result;
    
    
  scanf("%d", &T);
  while(T--)
    {
      scanf("%d", &B);
      for(i = 0; i < B; ++i)
	scanf("%d", &(b[i]));
        
      scanf("%d", &M);
      for(i = 0; i < M; ++i)
	scanf("%d", &(m[i]));
        
      sort(b, b+B);
      sort(m, m+M);
      reverse(b, b+B);
      reverse(m, m+M);
      i = 0;
      result = -1;
      while(i < B && i < M)
        {
	  if(b[i] == m[i]) i += 1;
	  else if(b[i] > m[i])
            {
	      result = 1;
	      break;
            }
	  else if(b[i] < m[i])
            {
	      result = 2;
	      break;
            }
            
            
        }
      if(result == -1)
        {
	  if(i == B)
            {
	      if(i == M) result = 0;
	      else result = 2;
            }
	  else if(i == M) result = 1;
            
        }
      switch(result)
        {
	case 0: printf("Draw\n"); break;
	case 1: printf("Bajtocja\n"); break;
	case 2: printf("Megabajtolandia\n"); break;
        }
    }
  return 0;
}
                
