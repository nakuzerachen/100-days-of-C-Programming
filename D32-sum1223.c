/*Day 32, calculate the sum of
1*2+2*3+3*4+...+(n-1)n*/
#include <stdio.h>
#include <stdlib.h>

int f(int n)
{
    if(n>1)
        return ((n+1)*f(n-1)/(n-1));
    else
        return 2;
}

int main()
{
    int i,n,sum=0;
    printf("Give me an integer.\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        sum=sum+f(i);
    printf("n=%d,n*(n+1)=%d*%d=%d,sum=%d\n",n,n,n+1,n*(n+1),sum);
    system("pause");
    return 0;
}