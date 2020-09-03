/*Day 8, clear buffer to make the program run properly.*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int x;
    char w[10],ch;
    printf("Give me an integer.\n");
    scanf("%d",&x);
    fflush(stdin);/*Erase buffer, like flush the toilet.*/
    printf("Give me a word.\n");
    scanf("%s",w);
    fflush(stdin);
    printf("Give me an alphabet or a symbol.\n");
    scanf("%c",&ch);
    printf("x=%d\n",x);
    printf("The word is %s.\n",w);
    printf("The ASCII of %c is %d.\n",ch,ch);
}