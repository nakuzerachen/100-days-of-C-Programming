/*Day 9, getch(), the word you type won't show on screen*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){
    char ch;
    printf("Give me a character or symbol.\n");
    ch=getch();
    printf("You typed in %c, the ASCII of %c is %d.\n",ch,ch,ch);
    system("pause");
    return 0;
}