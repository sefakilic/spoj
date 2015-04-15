// SNAPPER.cpp

#include <stdio.h>
#include <math.h>
int main() {
    int T;
    int N, K;
    int x;
    scanf("%d", &T);
    for(int c = 0; c < T; ++c) {
        scanf("%d %d", &N, &K);
        printf("Case #%d: ", c+1);
        
        x = pow(2, N);
        if( K % x == x-1 ) printf("ON\n");
        else printf("OFF\n");
    }
    
    return 0;
}
