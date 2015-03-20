#include "stdio.h"
int main() {
    int numberOfTestCases = 0;
    int n0;
    int n1;
    int n2;
    int n3;
    int n4;
    
    while(1) {
        scanf("%d", &n0);
        if(n0 == 0) break;
        numberOfTestCases += 1;
        printf("%d. ", numberOfTestCases);
        n1 = 3 * n0;
        if(n1 / 2 * 2 == n1) {
            printf("even ");
            n2 = n1 / 2;
        }
        else {
            printf("odd ");
            n2 = (n1 + 1) / 2;
        }
        n3 = 3 * n2;
        printf("%d\n", n3/9);
    }
    return 0;
}
        
