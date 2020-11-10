/*Day 70 - Convert Octal Number and Hexadecimal Number to Binary*/
#include <stdio.h>
#define SIZE 12

int show_binary(int n)
{
    int i,B[SIZE]={0};
    for(i=1;i<SIZE;i++)
    {
        B[SIZE-i]=n%2;
        n%=2;
    }

    for(i=0;i<SIZE;i++)
        printf("%d",B[i]);
    return 0;
}

int main()
{
    int oct=013,hexa=0x4133;
    printf("oct=%o(8)\n",oct);

    printf("hexa=%x(16)\n",hexa);

    return 0;
}