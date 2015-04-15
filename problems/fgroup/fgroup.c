#include "stdio.h"
int main() {
  char arr1[50000];
  char arr2[50000];
  int T;
  int M;
  int N;
  int i,j;
  int x;
  int Q;
	
	
  scanf("%d", &T);
  for(i = 0; i < T; ++i) {
    for(j = 0; j < 50000; ++j) {
      arr1[j] = 0;
      arr2[j] = 0;
    }
    scanf("%d", &N);
    for(j = 0; j < N; ++j) {
      scanf("%d", &x);
      arr1[x] = 1;
    }
    scanf("%d", &M);
    for(j = 0; j < M; ++j) {
      scanf("%d", &x);
      arr2[x] = 1;
    }
    scanf("%d", &Q);
    for(j = 0; j < Q; ++j) {
      scanf("%d", &x);
      if(arr1[x] == 1) {
	if(arr2[x] == 1) {
	  printf("both\n");
	}
	else printf("1\n");
      }
      else if(arr2[x] == 1) {
	printf("2\n");
      }
      else printf("-1\n");
    }
    printf("\n");
  }
	
  return 0;
}
		
