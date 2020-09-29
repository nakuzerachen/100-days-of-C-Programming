/*Day 34, find a number in an array*/
#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int main()
{
    int A[SIZE]={94,70,76,85,47};
    int i,num;
    int val=0;
    for(i=0;i<SIZE;i++)
        printf("A[%d]=%d\t",i,A[i]);

    printf("\n");
    printf("Which number do you want to look for?\t");
    scanf("%d",&num);

    for(i=0;i<SIZE;i++)
    {
        if(A[i]==num)
        {
            printf("A[%d]=%d\n",i,A[i]);
            val=1;
        }
    }
    if(val==0)
        printf("Sorry, no matching results.\n");

    system("pause");
    return 0;
}