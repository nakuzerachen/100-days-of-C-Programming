/*Day 10, use getchar instead of scanf when inputting symbols*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int x,y;
    char c;
    printf("Give me an integer.\n");
    scanf("%d",&x);
    fflush(stdin);
    printf("Give me a symbol or character.\n");
    c=getchar();
    y=x*x;
    printf("The integer code is %x,the ASCII of %c is %d.\n",y,c,c);
    system("pause");
    return 0;
}