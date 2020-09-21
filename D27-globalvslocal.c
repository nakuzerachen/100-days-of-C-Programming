/*Day 27, global variables vs local variables*/
#include <stdio.h>
#include <stdlib.h>

int n=100;
int f()
{
    n*=10;
    printf("In function f, n=%d\n",n);
    return 0;
}

int main()
{
    int n=1;
    printf("Before the function was used, n=%d\n",n);
    f();
    printf("After the function was used, n=%d\n",n);
    system("pause");
    return 0;
}