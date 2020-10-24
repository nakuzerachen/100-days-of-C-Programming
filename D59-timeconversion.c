/*Day 59 - HackerRank:Time Conversion*/
#include <stdio.h>
#include <stdlib.h>

char* timeConversion(char* s) 
{
    static char str[8];
    int i;
    if(*(s+8)==80)
    {
        (*s)++;
        *(s+1)=*(s+1)+2;
        if(*(s+1)>57)
        {
            *(s+1)=*(s+1)-10;
            (*s)++;
        }
        if(*s==50&&*(s+1)==52)
        {
            *s=(*s)-1;
            *(s+1)=*(s+1)-2;
        }
    }

    if(*(s+8)==65)
    {
        if(*s==49&&*(s+1)==50)
        {
            *s=(*s)-1;
            *(s+1)=*(s+1)-2;
        }
    }

    for(i=0;i<8;i++)
        *(str+i)=*(s+i);
    
    return str;
}

int main()
{
    char t[10]="12:00:00AM";
    printf("%s\n",timeConversion(t));
    system("pause");
    return 0;
}