/*Day 10, error caused by pressing enter key*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    char c1,c2;
    printf("Give me a character or symbol.\n");
    scanf("%c",&c1);
    fflush(stdin);
    printf("Give me another character or symbol.\n");
    scanf("%c",&c2);
    printf("c1=%c, c2=%c\n",c1,c2);
    printf("The ASCII of %c is %d, the ASCII of %c is %d.\n",c1,c1,c2,c2);
    system("pause");
    return 0;
}