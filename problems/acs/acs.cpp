#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main() {
  char c;
  char nl;
  int x;
  int y;
  int row_numbers[1234];
  int col_numbers[5678];
	
  int k = 1;
  for(int i = 0; i < 1234; ++i)
    row_numbers[i] = k++;
  k = 1;
  for(int j = 0; j < 5678; ++j)
    col_numbers[j] = k++;

  while(scanf("%c", &c) != EOF) {
		
    if(c == 'R') {
      scanf("%d %d", &x, &y);
      int tmp = row_numbers[y-1];
      row_numbers[y-1] = row_numbers[x-1];
      row_numbers[x-1] = tmp;
    }
    else if(c == 'C') {
      scanf("%d %d", &x, &y);
      int tmp = col_numbers[y-1];
      col_numbers[y-1] = col_numbers[x-1];
      col_numbers[x-1] = tmp;
    }
    else if(c == 'Q') {
      scanf("%d %d", &x, &y);
      printf("%d\n", (row_numbers[x-1] - 1) * 5678 + col_numbers[y-1]);
    }
    else if(c == 'W') {
      scanf("%d", &x);
      int index1 = x / 5678 + 1;
      int index2 = x % 5678;
      if(index2 == 0) {
	index2 = 5678;
	index1 = index1 - 1;
      }
      //	printf("%d %d\n", index1, index2);

      for(int i = 0; i < 1234; ++i) {
	if(row_numbers[i] == index1) {
	  printf("%d ", i+1);
	  break;
	}
      }
      for(int i = 0; i < 5678; ++i) {
	if(col_numbers[i] == index2) {
	  printf("%d\n", i+1);
	  break;
	}
      }

    }
    nl = 0;
    while(nl != '\n')
      scanf("%c", &nl);
  }

  return 0;
}
