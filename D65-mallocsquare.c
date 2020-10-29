/*Day 65 - Use Malloc to Square Numbers*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    ptr=(int *)malloc(sizeof(int));

    *ptr=12;

    printf("Result=%d\n",*ptr**ptr);

    system("pause");
    return 0;
}