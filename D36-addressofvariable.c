/*Day 36, where is the variable in the RAM?*/
#include <stdio.h>
#include <stdlib.h>

int f(int n)
{
    printf("The address of variable n in f is %p\n",&n);
    return 0;
}

int main()
{
    int n=1;
    printf("The address of variable n in main is %p\n",&n);
    //When using %p, you should use &(variable), like in scanf
    f(n);
    system("pause");
    return 0;
}