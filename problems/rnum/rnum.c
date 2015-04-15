#include "math.h"
#include "stdio.h"
#define READ(x) scanf("%d", &x)
int moves[100000];
int main() {
    moves[1] = 1;
    moves[2] = 2;
    
    int i;
    int factor;
    int min;
    for(i = 3; i < 100000; ++i) {
        min = 100001;
        for(factor = sqrt(i); factor > 1; --factor) {
            if(i / factor * factor == i)
            {
                if(min > moves[i-factor]) {
                    min = moves[i-factor];
                }
                
                if( min > moves[i-i/factor] ) {
                    min = moves[i-i/factor];
                }
            }
            if(min > moves[i-1]) {
                min = moves[i-1];
            }
            
        }
        moves[i] = min + 1;
    }
    
    /*
    for(i = 1; i <= 10; ++i) {
        printf("moves[%d] = %d\n", i, moves[i]);
    }
    */
    
    int t;
    int n;
    READ(t);
    while(t--) {
        READ(n);
        printf("%d\n", moves[n]);
    }
    return 0;
}
    
