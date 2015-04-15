#include<cstdio>
int t,x;
#define G ({scanf("%d",&t);t;})
#define L(i,b)for(int i=0;i<b;i++)
#define M(a,b)(a>b?a:b)
main(){x=G;L(i,x){int A[500]={0},m=0,r=G;L(i,r){L(j,i+1){A[j]=M(A[j+r],A[j+1+r])+G;m=M(m,A[j]);}L(j,i+1)A[j+r+1]=A[j];}printf("%d\n",m);}}
