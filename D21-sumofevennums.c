/*Day 21, calculate the sum of even numbers*/
#include <stdio.h>

int main()
{
    int i=2,n,sum=0;
    do
    {
        printf("Please type in an even number.\n");
        scanf("%d",&n);
    }   while(n<2||n%2!=0);
    
    while(i<=n)
    {
        sum+=i;
        i=i+2;
    }
    printf("2+4+...+%d+%d=%d\n",n-2,n,sum);
    return 0;
}