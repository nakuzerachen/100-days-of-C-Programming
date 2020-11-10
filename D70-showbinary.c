/*Day 70 - Convert Decimal Numbers to Binary Numbers*/
#include <stdio.h>
#define SIZE 12

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
    return 0;
}

int main()
{
    int n;
    printf("Give me a positive integer.\n");
    scanf("%d",&n);

    printf("%d(10)=",n);
    show_binary(n);
    printf("(2)\n");

    return 0;
}