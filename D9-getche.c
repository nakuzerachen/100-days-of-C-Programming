/*Day 9, getche(), enter is not required*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h> /*conio.h is where getche and getch are defined*/

int main(){
    char ch;
    printf("Please give me a symbol or a character.\n");
    ch=getche();
    printf("\n");
    printf("You typed in %c, the ASCII of %c is %d.\n",ch,ch,ch);
    system("pause");
    return 0;
}