/*Day 8, use string to input a word*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    char voc[10];/*A data which can store a 10-character word.*/
    printf("Please type in a word less than 10 characters.\n");
    scanf("%s",voc);/*You can't type in a space, or the word may now show properly.*/
    printf("The word is %s.\n",voc);
    system("pause");
    return 0;
}