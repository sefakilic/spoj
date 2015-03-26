#include "stdio.h"
#define READ(x) scanf("%d", &x)
int main() {
  int T; // number of test cases
  int N; // number of cycles
  int M; // number of test points
  int cycle_x[500];
  int cycle_y[500];
  int cycle_r[500];
  int point_x;
  int point_y;
  int in_cycle;
  int delta_x;
  int delta_y;
	
  int i;
  int j;
  int k;
	
	
  READ(T);
  for(i = 0; i < T; ++i) {
    if(i > 0)
      printf("\n");
			
    READ(N);
    READ(M);
    for(j = 0; j < N; ++j) {
      READ(cycle_x[j]);
      READ(cycle_y[j]);
      READ(cycle_r[j]);
    }
		
    for(j = 0; j < M; ++j) {
      READ(point_x);
      READ(point_y);
      in_cycle = 0;
      for(k = 0;k < N; ++k) {
	delta_x = point_x - cycle_x[k];
	delta_y = point_y - cycle_y[k];
	if(delta_x * delta_x + delta_y * delta_y <= cycle_r[k] * cycle_r[k])
	  in_cycle += 1;
      }
      printf("%d\n", in_cycle);
    }
  }
  return 0;
}
		
				
		
	
