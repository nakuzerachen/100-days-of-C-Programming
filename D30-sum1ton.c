/*Day 30, use recursive function to calculate*/
/*the sum of 1~n*/
#include <stdio.h>
#include <stdlib.h>

int sum(int n)
{
    if(n>0)
        return n+sum(n-1);
    else
        return 0;
}

int main()
{
    int n,val;
    printf("Give me an integer.\n");
    scanf("%d",&n);
    val=sum(n);
    printf("The sum of 1~%d is %d\n",n,val);
    system("pause");
    return 0;
}