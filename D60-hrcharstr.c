/*Day 60 - HackerRank:Input Characters and Strings at the Same Time*/
#include <stdio.h>
#include <stdlib.h>

int main() 
{

    char ch,s[100],sen[100];
    scanf(" %c",&ch);
    fflush(stdin);
    scanf("%s",s);
    fflush(stdin);
    scanf("\n");
    scanf("%[^\n]%*c",sen);
    printf("%c\n",ch);
    printf("%s\n",s);
    printf("%s\n",sen);
    return 0;
}