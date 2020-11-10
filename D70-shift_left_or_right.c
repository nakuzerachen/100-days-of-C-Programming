/*Day 70 - Binary Shift Left or Right*/
#include <stdio.h>
#define SIZE 10

int show_binary(int n)
{
    int i,B[SIZE]={0};
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
    int a,b;
    a=(89<<1);
    b=(232>>2);

    printf("89=");
    show_binary(89);

    printf("89<<1=");
    show_binary(a);

    printf("\n");

    printf("232=");
    show_binary(232);

    printf("232>>2=");
    show_binary(b);

    return 0;
}