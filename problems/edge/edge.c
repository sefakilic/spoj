#include <stdio.h>
#include <string.h>
 
int main() {
  char commands[250];
 
  int x, y;
  int i;
  char direction;	// r, l, t, d: right, left, top, down
 
  while(scanf("%s", commands) != EOF) {
    x = 310;
    y = 420;
    direction = 'r';
 
    // two lines of output is same for all inputs
    printf("300 420 moveto\n");
    printf("310 420 lineto\n");
    for(i = 0; i < strlen(commands); ++i) {
      if(commands[i] == 'A') {
	// clockwise
	switch(direction) {
	case 'r': direction = 'd'; y -= 10; break;
	case 'l': direction = 't'; y += 10; break;
	case 't': direction = 'r'; x += 10; break;
	case 'd': direction = 'l'; x -= 10;	break;
	}
      } else if(commands[i] == 'V') {
	// counter clockwise
	switch(direction) {
	case 'r': direction = 't'; y += 10; break;
	case 'l': direction = 'd'; y -= 10; break;
	case 't': direction = 'l'; x -= 10; break;
	case 'd': direction = 'r'; x += 10; break;
	}
      }
      // print new drawing
      printf("%d %d lineto\n", x, y);
    }
    // print two lines of output that is same for all input cases
    printf("stroke\n");
    printf("showpage\n");
  }
 
  return 0;
} 
