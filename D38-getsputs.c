/*Day 38, using gets() and puts()*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[32];
    puts("What's your name?");
    gets(name);
    puts("Hi!");/*Puts() will put \n automatically*/
    puts(name);
    puts("How are you?");

    system("pause");
    return 0;
}