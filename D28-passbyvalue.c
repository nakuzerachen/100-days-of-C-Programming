/*Day 28, pass by value*/
/*The variables will be copied for the functions*/
/*As a result, the original variables in main()*/
/*Will not be changed*/
#include <stdio.h>
#include <stdlib.h>

int f(int a, int b)
{
    a+=5;
    b*=5;
}

int main()
{
    int a=5,b=10;

    printf("Before the function was used, a=%d, b=%d\n",a,b);
    f(a,b);
    printf("After the function was used, a=%d, b=%d\n",a,b);
    system("pause");
    return 0;
}