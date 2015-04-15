#include "stdio.h"

int main() {
    int t;
    int piles[100];
    int p;
    int i;
    
    scanf("%d", &t);
    while(t--) {
        scanf("%d", &p);
        for(i = 0; i < p; ++i) {
            scanf("%d", piles + i);
        }
        printf("ALICE\n");
    }
    return 0;
}
