/*Day 52 - Structure Arrays*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct data
    {
        char name[50];
        char auth[25];
        int price;
    }book[10];

    printf("The size of book[1] is %d\n",sizeof(book[1]));
    printf("The size of book is %d\n",sizeof(book));

    system("pause");
    return 0;
}