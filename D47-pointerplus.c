/*Day 47 - A Pointer Points to a String, and the Pointer's Value was Added*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *ptr="How are you?";
    char name[25];
    printf("What is your name?\n");
    scanf("%s",name);
    printf("Hi,%s!\n",name);
    ptr=ptr+4;
    puts(ptr);
    system("pause");
    return 0;
}