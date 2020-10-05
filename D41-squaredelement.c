/*Day 41, an array with all its elements squared*/
#include <stdio.h>
#include <stdlib.h>
#define N 10

int square(int arr[])
{
    int i;
    for(i=0;i<N;i++)
    {
        arr[i]*=arr[i];
    }
    return 0;
}

int main()
{
    int A[N]={3,4,5,1,-1,4,13,14,5,-9};
    int i;
    square(A);
    for(i=0;i<N;i++)
        printf("A[%d]=%d, address = %p\n",i,A[i],&A[i]);
    system("pause");
    return 0;
}