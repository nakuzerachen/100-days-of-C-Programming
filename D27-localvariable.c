/*Day 27, the concept of local variables*/
#include <stdio.h>
#include <stdlib.h>

int f()
{
    int x=47;
    printf("In function f, x=%d\n",x);
    return 0;
}

int main()
{
    int x=190;
    printf("Before the function was used, x=%d\n",x);
    f();
    printf("After the function was used, x=%d\n",x);
    system("pause");
    return 0;
}