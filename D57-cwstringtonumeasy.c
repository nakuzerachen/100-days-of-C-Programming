/*Day 57 - Codewars:Combine String to Number Easy*/
#include <stdio.h>
#include <stdlib.h>

int string_to_number(const char *src) 
{
    return atoi(src);
}

int main()
{
    char str[10];
    printf("Please input a number.\n");
    scanf("%s",str);
    printf("Output=%d\n",string_to_number(str));
    system("pause");
    return 0;
}