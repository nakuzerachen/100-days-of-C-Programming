/*Day 27, the concept of global variables*/
#include <stdio.h>
#include <stdlib.h>

int x;
int f()
{
    x=17;
    printf("In function f, x=%d\n",x);
    return 0;
}

int main()
{
    x=71;
    printf("Before the function was used, x=%d\n",x);
    f();
    printf("After the function was used, x=%d\n",x);
    system("pause");
    return 0;
}