/*Day 20, find all the divisors of an integer*/
/*e.g.,f(6)={1,2,3,6}*/
#include <stdio.h>

int main()
{
    int n,i;
    printf("Please type in a positive integer.\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
            printf("%d|%d\n",i,n);
    }
    return 0;
}