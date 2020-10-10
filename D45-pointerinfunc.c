/*Day 45, call pointer into a function*/
#include <stdio.h>
#include <stdlib.h>

int square(int *ptr)
{
    *ptr=(*ptr)*(*ptr);
    printf("*ptr^2=%d, ptr=%p\n",*ptr,ptr);
    return 0;
}

int main()
{
    int n,*ptrn;
    printf("Please input an integer.\n");
    scanf("%d",&n);
    ptrn=&n;
    square(ptrn);
    system("pause");
    return 0;
}