/*Day 32, find f(5) with f(x)=2f(x-1)-5,f(0)=3*/
#include <stdio.h>
#include <stdlib.h>

int f(int x)
{
    if(x>0)
        return 2*f(x-1)-5;
    else
        return 3;
}

int main()
{
    int x;
    printf("Give me a positive integer.\n");
    scanf("%d",&x);
    printf("f(%d)=%d\n",x,f(x));
    system("pause");
    return 0;
}