/*Day 46 - Use a Pointer to Calculate the Summation of Elements(Alternative)*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,sum=0,A[3]={11,13,17};
    int *ptr=A;//*ptr is a variable
    for(i=0;i<3;i++)
        sum+=*(ptr++);//(A+i) is OK, but A++ is wrong since A is a pointer constant
    printf("sum=%d\n",sum);
    system("pause");
    return 0;
}