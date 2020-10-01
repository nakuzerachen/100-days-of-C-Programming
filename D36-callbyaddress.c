/*Day 36, arrays are called by address*/
#include <stdio.h>
#include <stdlib.h>
#define N 3

int f(int A[N])
{
    int i;
    for(i=0;i<N;i++)
        printf("A[%d]=%d, address=%p\n",i,A[i],&A[i]);
    return 0;
}

int main()
{
    int M[N]={9,1,8};
    int i;
    for(i=0;i<N;i++)
        printf("M[%d]=%d, address=%p\n",i,M[i],&M[i]);
    
    printf("\n");
    f(M);
    system("pause");
    return 0;    
}