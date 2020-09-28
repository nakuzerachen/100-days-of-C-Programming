/*Day 33, declare the initial value(s) of element(s)
in an array*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[4]={0};
    int b[4]={43,53,66,99};
    int c[]={23,56,87,90};
    int i;
    for(i=0;i<=3;i++)
        printf("a[%d]=%d\t",i,a[i]);
    printf("\n");
    i=0;
    for(i=0;i<=3;i++)
        printf("b[%d]=%d\t",i,b[i]);
    printf("\n");
    i=0;
    for(i=0;i<=3;i++)
        printf("c[%d]=%d\t",i,c[i]);
    printf("\n");
    system("pause");
    return 0;
}