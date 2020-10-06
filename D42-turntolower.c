/*Day 42, turn all capital letters to lowercase ones*/
#include <stdio.h>
#include <stdlib.h>
#define LEN 20

int lower(char str[])
{
    int i=0;
    while(str[i]!='\0')
    {
        if(str[i]>=65 && str[i]<=90)
            str[i]=str[i]+32;
        i++;
    }
    return 0;
}

int main()
{
    int i;
    char str[LEN];
    printf("Please input a string.\n");
    scanf("%s",str);
    lower(str);
    printf("Lowercase:%s\n",str);
    system("pause");
    return 0;
}