/*Day 10, use putchar instead of printf to output a symbol*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){
    char c,d;
    printf("Give me a symbol or character.\n");
    c=getche();
    putchar('\n');
    printf("Give me another symbol or character.\n");
    d=getch();
    printf("The first input is ");
    putchar(c);
    putchar('\n');
    printf("The second input is ");
    putchar(d);
    putchar('\n');
    system("pause");
    return 0;
}
