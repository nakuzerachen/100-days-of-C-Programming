/*Day 20, print No.41~No.64 in ASCII*/
#include <stdio.h>

int main(){
    int i;
    char ch;
    for(i=41;i<=64;i++)
        printf("ASCII %d:%c\n",i,(char)i);
    return 0;
}