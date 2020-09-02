/*Day 7, use scanf() to input character*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    char ch;
    printf("Please input character.\n");
    scanf("%c",&ch);/*Scan the first character you key in*/
    printf("ch=%c, ASCII is %d.\n",ch,ch);
    system("pause");
    return 0;
}