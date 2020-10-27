/*Day 62 - HackerRank:Digit Frenquency*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[1000];
    scanf("%s",str);
    int i=0,n=0,dig[10]={0};
    while(*(str+i)!='\0')
    {
        n++;
        i++;
    }

    for(i=0;i<n;i++)
    {
        switch(str[i])
        {
            case '0':
                dig[0]++;
                break;
            case '1':
                dig[1]++;
                break;
            case '2':
                dig[2]++;
                break;
            case '3':
                dig[3]++;
                break;
            case '4':
                dig[4]++;
                break;
            case '5':
                dig[5]++;
                break;
            case '6':
                dig[6]++;
                break;
            case '7':
                dig[7]++;
                break;
            case '8':
                dig[8]++;
                break;
            case '9':
                dig[9]++;
                break;
            default:
                break;
        }
    }

    for(i=0;i<10;i++)
        printf("%d ",dig[i]);
    
    system("pause");
    return 0;
}