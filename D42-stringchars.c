/*Day 42, calculate how many characters are in a string*/
#include <stdio.h>
#include <stdlib.h>
#define LEN 20
int length(char str[])
{
    int i,count=0;
    for(i=0;i<LEN;i++)
    {
        if(str[i]!=0)
            count++;
        else
            break;
    }
    return count;
}

int main()
{
    char str[LEN];
    printf("Please input a string.\n");
    gets(str);
    printf("The length of the string is %d.\n",length(str));
    system("pause");
    return 0;
}