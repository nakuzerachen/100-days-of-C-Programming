/*Day 58 - HackerRank:Simple Array Elements Summation*/
#include <stdio.h>
#include <stdlib.h>

int simpleArraySum(int ar_count, int* ar) 
{
    int i,sum=0;
    for(i=0;i<ar_count;i++)
        sum+=*(ar+i);
    return sum;
}

int main()
{
    int A[10]={3,6,4,6,11,24,3,4,10,23};
    printf("Summation=%d\n",simpleArraySum(10,A));
    system("pause");
    return 0;
}