#include <cstdio>
int main() {
    unsigned A=13456,B = 3137,C =65535,seed=A;
    for(int i=0;i<10000;i++)
    {   seed=(seed*B+i);
        seed=seed-seed/C*C;
        printf("%u\n",seed);}return 0;}
