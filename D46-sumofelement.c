/*Day 46 - Use a Pointer to Calculate the Summation of Elements*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,sum=0,A[3]={11,13,17};
    for(i=0;i<3;i++)
        sum+=*(A+i);//(A+i) is OK, but A++ is wrong since A is a pointer constant
    printf("sum=%d\n",sum);
    system("pause");
    return 0;
}