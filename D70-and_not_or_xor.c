/*Day 70 - Operators: And, Not, Or, XOR*/
#include <stdio.h>
#define SIZE 8

int show_binary(int n)
{
    int i,B[SIZE];
    for(i=1;i<SIZE;i++)
    {
        B[SIZE-i]=n%2;
        n=n/2;
    }

    for(i=0;i<SIZE;i++)
        printf("%d",B[i]);
    printf("\n");
    return 0;
}

int main()
{
    int a=73,b=11,arr[5];
    printf("a=");
    show_binary(a);
    printf("b=");
    show_binary(b);

    printf("%d&%d=%d\n",a,b,a&b);
    printf("%d|%d=%d\n",a,b,a|b);
    printf("%d^%d=%d\n",a,b,a^b);

    return 0;
}