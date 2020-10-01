/*Day 36, change the values in an array using a function*/
#include <stdio.h>
#include <stdlib.h>
#define N 3

int exh(int A[N])
{
    int i;
    for(i=0;i<N;i++)
        printf("A[%d]=%d\t",i,A[i]);

    printf("\n");
    return 0;
}

int mul(int A[N])
{
    int i;
    for(i=0;i<N;i++)
    {
        A[i]*=2;
        printf("A[%d]=%d\t",i,A[i]);
    }
    printf("\n");
    return 0;
}

int main(){
    int A[N]={34,8,15};
    printf("Before mul() is called, array A is:\n");
    exh(A);
    printf("When mul() is called, array A is:\n");
    mul(A);
    printf("Now array A is:\n");
    exh(A);
    system("pause");
    return 0;
}