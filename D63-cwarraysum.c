/*Day 63 - Codewars:The Sum of 2 arrays*/
#include <stdio.h>
#include <stdlib.h>

int arr_plus_arr(const int *a, const int *b, size_t na,size_t nb)
{
    int i,sum=0;
    for(i=0;i<na;i++)
        sum+=*(a+i);
    for(i=0;i<nb;i++)
        sum+=*(b+i);
    return sum;
}

int main()
{
    int A[5]={4,2,4,1,6},B[5]={1,-3,4,6,8};
    printf("Sum=%d\n",arr_plus_arr(A,B,5,5));
    system("pause");
    return 0;
}