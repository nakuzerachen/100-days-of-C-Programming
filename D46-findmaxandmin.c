/*Day 46 - Find the Maximum and Minimum Value of an Array*/
#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
int *max(int *arr)
{
    int i,*max;
    max=arr;
    for(i=0;i<SIZE;i++)
    {
        if(*(arr+i)>*max)
            max=arr+i;
    }
    return max;
}

int *min(int *arr)
{
    int i,*min;
    min=arr;
    for(i=0;i<SIZE;i++)
    {
        if(*(arr+i)<*min)
            min=arr+i;
    }
    return min;
}

int main()
{
    int i,A[SIZE]={12,13,53,2,31};
    int *b,*s;
    for(i=0;i<SIZE;i++)
        printf("A[%d]=%d\t",i,A[i]);
    printf("\n");
    b=max(A);
    s=min(A);
    printf("Max=%d, Min=%d\n",*b,*s);
    system("pause");
    return 0;
}