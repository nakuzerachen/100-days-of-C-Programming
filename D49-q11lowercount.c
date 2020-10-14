/*Day 49 - Count the Amount of Lowercase Letters in a String*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *ptr="We are best friends.";
    int i=0,count=0;
    while(*(ptr+i)!='\0')
    {
        i++;
        if(*(ptr+i)>=97&&*(ptr+i)<=122)
            count++;
    }
    printf("Lowercase Letters:%d\n",count);
    system("pause");
    return 0;
}