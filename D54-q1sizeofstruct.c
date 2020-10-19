/*Day 54 - Q1:Determine the Size of a Structure Variable*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct data
    {
        int num;//4 bytes
        char ch;//1 byte
        double dist;//8 bytes
    }aaa;

    printf("The size of aaa=%d\n",sizeof(aaa));
    system("pause");
    return 0;
}