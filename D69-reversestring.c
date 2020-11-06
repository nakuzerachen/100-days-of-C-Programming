/*Day 69 - Reverse a String*/
#include <stdio.h>
#include <stdlib.h>

char *reverse_letter(const char *str)
{
    int i,count=0;
    while(*(str+i)!='\0')
    {
        count++;
        i++;
    }

    char *revstr;
    revstr=(char *)malloc(count*sizeof(char));

    for(i=0;i<count;i++)
        *(revstr+i)=*(str+count-i-1);
        
    return revstr;
}

int main()
{
    char str[64],*revstr;
    printf("Please input a string.\n");
    scanf("%s",str);

    revstr=reverse_letter(str);

    puts(revstr);

    return 0;
}