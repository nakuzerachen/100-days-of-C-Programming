/*Day 10, output string with \ and the width is 20*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    char sam[10];
    printf("Give me a word less than 10 characters.\n");
    scanf("%s",sam);
    printf("\\%20s\\\n");
    printf("\\%-20s\\\n");
    system("pause");
    return 0;
}