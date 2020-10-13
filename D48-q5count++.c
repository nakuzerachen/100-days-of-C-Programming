/*Day 48 - Create a Function that Every Time it is Called, 
the Value will Increase by 1*/
#include <stdio.h>
#include <stdlib.h>

int count(int *x)
{
    *x=*x+1;
    return 0;
}

int main()
{
    int num=0,i;
    for(i=1;i<=10;i++)
    {
        count(&num);
        printf("Call Count For %d Times, num=%d\n",i,num);
    }
    system("pause");
    return 0;
}