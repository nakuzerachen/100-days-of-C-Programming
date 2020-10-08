/*Day 43, count the time a,e,i,o,u appeared*/
#include <stdio.h>
#include <stdlib.h>
#define LEN 25

int length(char str[])
{
    int i,count=0;
    for(i=0;i<LEN;i++)
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
    char str[LEN];
    int a,e,i,o,u,count,n;
    a=e=i=o=u=0;
    printf("Please input a string.\n");
    gets(str);
    for(count=0;count<length(str);count++)
    {
        switch(str[count])
        {
            case'A':
            case'a':
                a++;
                break;
            case'E':
            case'e':
                e++;
                break;
            case'I':
            case'i':
                i++;
                break;
            case'O':
            case'o':
                o++;
                break;
            case'U':
            case'u':
                u++;
                break;
            default:
                break;
        }
        if(str[count]=='\0')
            break;
    }
    printf("A=%d, E=%d, I=%d, O=%d, U=%d\n",a,e,i,o,u);
    system("pause");
    return 0;
}