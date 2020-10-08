/*Day 43, uppercase to lowercase, but using puts*/
#include <stdio.h>
#include <stdlib.h>
#define MAX 25

int toLower(char str[])
{
    int i;
    for(i=0;i<MAX;i++)
    {
        if(str[i]>=65 && str[i]<=90)
            str[i]=str[i]+32;
    }
    return 0;
}

int main()
{
    char str[MAX];
    int i;
    puts("Please input a string.");
    gets(str);
    toLower(str);
    puts("Lowercase:");
    puts(str);
    system("pause");
    return 0;
}