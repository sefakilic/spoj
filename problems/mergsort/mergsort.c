#include "stdio.h"

int A[100000];
int B[100000];
int lengthA;

void merge(int start, int q, int end);

void mergesort(int start, int end)
{
    if(start >= end) return;
    int q = (start + end) / 2;
    mergesort(start, q);
    mergesort(q+1, end);
    merge(start, q, end);
};

void merge(int start, int q, int end)
{
    int i = start;
    int j = q+1;
    
    int elem = 0;
    int total = end - start + 1;
    while(elem < total)
    {
        if(i > q)
        {
            B[elem++] = A[j++];
        }
        else if(j > end)
        {
            B[elem++] = A[i++];
        }
        else
        {
            if(A[i] <= A[j])
                B[elem++] = A[i++];
            else B[elem++] = A[j++];
        }
    }
    for(elem = 0; elem < total; ++elem)
    {
        A[start+elem] = B[elem];
    }
}



int main()
{
    lengthA = 0;
    int x;
    
    while(scanf("%d", &x) != EOF)
    {
        A[lengthA++] = x;
    }
    
    mergesort(0, lengthA-1);
    
    for(x = 0; x < lengthA; ++x)
        printf("%d ", A[x]);
    printf("\n");
    
    return 0;
}
        
    
    
