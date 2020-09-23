/*Day 29,  remainder of two integers*/
#include <stdio.h>
#include <stdlib.h>

int mod(int a,int b)
{
    int y;
    y=a%b;
    return y;
}

int main()
{
    int m,n,r;
    printf("Give me 2 integers, use a comma to separate them.\n");
    scanf("%d,%d",&m,&n);
    r=mod(m,n);
    printf("%d/%d=%d...%d\n",m,n,m/n,r);
    system("pause");
    return 0;
}