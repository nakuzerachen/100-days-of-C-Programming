/*Day 32, calculate 2+4+6+...+2n*/
#include <stdio.h>
#include <stdlib.h>

int sum(int n)
{
    if(n>1)
        return sum(n-1)+2*n;
    else
        return 2;
}

int main()
{
    int n,res=0;
    printf("Give me an integer n.\n");
    scanf("%d",&n);
    res=sum(n);
    printf("2+4+...+%d=%d\n",2*n,res);
    system("pause");
    return 0;
}