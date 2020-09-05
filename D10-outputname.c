/*Day 10, print out anyone's name*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    char surname[15],firstname[15];
    printf("What is your surname?\n");
    scanf("%s",surname);
    printf("What is your first name?\n");
    scanf("%s",firstname);
    printf("Your name is %s %s,right?\n",firstname,surname);
    system("pause");
    return 0;
}