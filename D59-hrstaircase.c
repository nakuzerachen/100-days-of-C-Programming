/*Day 59 - HackerRank:Staircase*/
#include <stdio.h>
#include <stdlib.h>

void staircase(int n) 
{
    int i,j,count;
    for(count=1;count<=n;count++)
    {
        for(i=n;i>count;i--)
            printf(" ");
        for(j=1;j<=count;j++)
            printf("#");
        printf("\n");
    }
}

int main()
{
    staircase(6);
    system("pause");
    return 0;
}