/*Day 5, overflow detection*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    unsigned short int x=80000;/*Range of unsigned short int is [0,65535]*/
    printf("%d\n",x);/*80000=65536*1+14464*/
    system("pause");
    return 0;
}