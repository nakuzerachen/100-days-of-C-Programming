/*Day 4, overflow of the data*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    short int sum,x;
    x=32767;
    sum=x+1;
    printf("sum=%d\n",sum);/*The result will be -32768, the minimum of the short int*/
    system("pause");
    return 0;
}