/*Day 57 - Codewars:Combine String to Number*/
#include <stdio.h>
#include <stdlib.h>

int string_to_number(const char *src) 
{
    int i=0,j,n=0,output=0;
    while(*(src+i)=='-'||(*(src+i)>=48 && *(src+i)<=57))
    {
        n++;
        i++;
    }
    int d[n];
    for(i=0;i<n;i++)
    {
        if(*(src+i)=='-')
            d[i]=0;
        else
            d[i]=*(src+i)-48;//ASCII of 1~9 is 48~57
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
            d[i]=10*d[i];
    }
    for(i=0;i<n;i++)
        output+=d[i];
    if(d[0]==0)
        output=-output;
    return output;
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