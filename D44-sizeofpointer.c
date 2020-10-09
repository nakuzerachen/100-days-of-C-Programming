/*Day 44, size of pointers*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptrint;
    char *ptrch;
    printf("The size of ptrint=%d\t",sizeof(ptrint));
    printf("The size of *ptrint=%d\n",sizeof(*ptrint));
    printf("The size of ptrch=%d\t",sizeof(ptrch));
    printf("The size of *ptrch=%d\n",sizeof(*ptrch));
    system("pause");
    return 0;
}