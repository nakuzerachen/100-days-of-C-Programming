/*Day 10, fix "No more mistakes" space error*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    char s[10],t[10],e[10];
    printf("Please give me a sentence.\n");
    scanf("%s %s %s",s,t,e);/*Separate the sentence into 3 words will work.*/
    printf("\"%s %s %s\"\n",s,t,e);
    system("pause");
    return 0;
}