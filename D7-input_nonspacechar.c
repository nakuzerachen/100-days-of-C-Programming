/*Day 7, print the first non space character you key in*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    char ch;
    printf("Please input a character.\n");
    scanf(" %c",&ch);
    printf("ch=%c, ASCII is %d\n",ch,ch);
    system("pause");
    return 0;
}