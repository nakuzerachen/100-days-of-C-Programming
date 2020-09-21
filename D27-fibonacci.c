/*Day 27, fibonacci series*/
#include <stdio.h>
#include <stdlib.h>

int fib(int n)
{
    if(n>2)
        return fib(n-1)+fib(n-2);
    else
        return 1;
}

int main()
{
    int i,n;
    printf("Give me a positive number.\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        printf("fib(%d)=%d\n",i,fib(i));
    system("pause");
    return 0;
}