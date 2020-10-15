/*Day 51 - The Size of a Structure*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct book
    {
        char name[25];//25 bytes
        char author[25];//25 bytes
        int price;//4 bytes
    }b1;
    
    printf("sizeof(b1)=%d\n",sizeof(b1));//The size must have an element of 4
    system("pause");
    return 0;
}