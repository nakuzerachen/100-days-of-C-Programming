/*Day 46 - Return Pointer Address From a Function*/
#include <stdio.h>
#include <stdlib.h>

int *MAX(int *x,int *y)
{
    if(*x>*y)
        return x;
    if(*y>*x)
        return y;
}

int main()
{
    int a,b,*x,*y;
    x=&a,y=&b;
    printf("Give me two different integers, use a comma to separate them.\n");
    scanf("%d,%d",x,y);
    printf("%d is bigger.\n",*MAX(x,y));
    system("pause");
    return 0;
}