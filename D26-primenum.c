/*Day 26, determine whether a number is a prime number*/
#include <stdio.h>
#include <stdlib.h>

int prime(int n)
{
    int i;
    for(i=2;i<=(n/2);i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}

int main()
{
    int i,n,re;
    printf("Type in a positive integer.\n");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        re=prime(i);
        if(re==1)
        {
            printf("%d is a prime number.\n",i);
        }
    }
    system("pause");
    return 0;
}