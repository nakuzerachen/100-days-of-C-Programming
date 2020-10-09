/*Day 44, reverse a string*/
#include <stdio.h>
#include <stdlib.h>
#define MAX 25

int length(char str[])
{
    int i,count=0;
    for(i=0;i<MAX;i++)
    {
        if(str[i]!='\0')
            count++;
        else
            break;
    }
    return count;
}

int main()
{
    int i,n;
    char str[MAX],temp;
    printf("Please input a string.\n");
    gets(str);
    n=length(str)-1;
    for(i=0;i<=n/2;i++)
    {
        temp=str[i];
        str[i]=str[n-i];
        str[n-i]=temp;
    }
    printf("Reversed:%s\n",str);
    system("pause");
    return 0;
}