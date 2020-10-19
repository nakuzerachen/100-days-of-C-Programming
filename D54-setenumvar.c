/*Day 54 - Enumeration Variable Setting*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    enum color
    {
        blue=4,//setting values is accepted
        black=11,
        white=18,
    }shirt;

    printf("Blue=%d, black=%d, white=%d\n",blue,black,white);
    system("pause");
    return 0;
}