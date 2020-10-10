/*Day 45, pointers use pass by address to deliver value*/
#include <stdio.h>
#include <stdlib.h>

int swt(int *x, int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
    return 0;
}

int main()
{
    int a=4,b=99;
    printf("Before changing:a=%d, b=%d\n",a,b);
    swt(&a,&b);
    printf("After changing:a=%d, b=%d\n",a,b);
    system("pause");
    return 0;
}