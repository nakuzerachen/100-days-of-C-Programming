/*Day 8, the buffer data in scanf()*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int x;
    char w[10];
    printf("Give me a postive integer.\n");
    scanf("%d",&x);/*The program will work properly once you input a number.*/
    printf("x=%d\n",x);
    scanf("%s",w);
    printf("The word you left is %s.\n",w);
    system("pause");
    return 0;
}