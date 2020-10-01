/*Day 36, an array in a function*/
#include <stdio.h>
#include <stdlib.h>
#define N 4

int f(int A[])
{
    int i;
    for(i=0;i<N;i++)
        printf("B[%d]=%d\t",i,A[i]*A[i]);
    
    printf("\n");
    return 0;
}

int main()
{
    int A[N]={17,31,45,77};
    f(A);
    
    system("pause");
    return 0;
}