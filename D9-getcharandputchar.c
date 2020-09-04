/*Day 9, getchar and putchar*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    char ch;
    printf("Please type in a character or symbol.\n");
    ch=getchar();/*Type a character and press enter, the function will store it.*/
    printf("Your input is:");
    putchar(ch);
    putchar('\n');
    system("pause");
    return 0;
}