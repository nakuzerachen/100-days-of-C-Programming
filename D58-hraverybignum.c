/*Day 58 - HackerRank:A Very Big Number*/
#include <stdio.h>
#include <stdlib.h>

long bignum(int ar_count, long* ar)
{
    long int i,sum=0;
    for(i=0;i<ar_count;i++)
        sum+=*(ar+i);
    return sum;
}

int main()
{
    long A[5]={100000001,100000002,100000003,100000004,100000005};
    printf("Sum=%d\n",bignum(5,A));
    system("pause");
    return 0;
}