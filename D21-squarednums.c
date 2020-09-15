/*Day 21, print out the square of integers*/
/*and calculate their sum.*/
#include <stdio.h>

int main()
{
    int i=1,n,sum=0;
    do
    {
        printf("Please type in a positive integer.\n");
        scanf("%d",&n);
    }   while(n<=0);

    while(i<=n)
    {
        printf("%d^2=%d\n",i,i*i);
        sum=sum+(i*i);
        i++;
    }
    printf("1^2+2^2+...+%d^2+%d^2=%d\n",n-1,n,sum);
    return 0;
}