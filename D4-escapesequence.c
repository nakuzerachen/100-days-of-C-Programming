/*Day 4, the usage of escape sequence.*/
/*\n is a kind of escape sequence, which means a new line*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    char a,n,t,q1,q2;
    a='\a';/*\a is a beep sound*/
    n='\n';/*\n is a new line*/
    t='\t';/*\t is a tab*/
    q1='\'';/*\' is the mark '*/
    q2='\"';/*\" is the mark "*/
    printf("%c",a);
    printf("x%c\n",n);
    printf("x%cy\n",t);
    printf("%c\n",q1);
    printf("%c\n",q2);
    system ("pause");
    return 0;
}