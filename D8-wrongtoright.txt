/*Day 8, change slightly to output right word.*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int x;
    char w;
    printf("Please give me an integer.\n");
    scanf("%d",&x);
    printf("Please give me a symbol or alphabet.\n");
    scanf(" %c",&w);/*Adding a space before %c is critical, the enter key will be skipped.*/
    printf("x=%d, the ASCII of %c is %d.\n",x,w,w);
    system("pause");
    return 0;
}