/*Day 49 - Count the Number of Characters in a String which a Pointer Points at*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *ptr="We are best friends.";
    int i=0,count=0;
    while(*(ptr+i)!='\0')
    {
        i++;
        count++;
    }
    printf("The number of characters:%d\n",count);
    system("pause");
    return 0;
}