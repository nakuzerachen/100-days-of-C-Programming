/*Day 49 - Count the Number of Characters in any String*/
#include <stdio.h>
#include <stdlib.h>

int length(char *ptr)
{
    int i=0,count=0;
    while(*(ptr+i)!='\0')
    {
        i++;
        count++;
    }
    return count;
}

int main()
{
    char str[40],*ptr;
    ptr=str;
    printf("Please input a string.\n");
    gets(str);
    printf("Amount of Characters:%d\n",length(ptr));
    system("pause");
    return 0;
}