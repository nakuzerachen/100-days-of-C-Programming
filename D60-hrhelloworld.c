/*Day 60 - HackerRank: Hello World!*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() 
{
    char s[100];
    scanf("%[^\n]%*c",s);
  	printf("Hello, World!\n");
    printf("%s\n",s);
    system("pause");
    return 0;
}