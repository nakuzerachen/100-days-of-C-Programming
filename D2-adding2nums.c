/*Day 2: Write a program which can calculate the sum of two integers.*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int x,y,sum;
    scanf("%d+%d",&x,&y); /*scanf() is used for input, the "&" marks in front of the variables are necessary.*/
    sum=x+y;
    printf("%d+%d=%d\n",x,y,sum); /*%d is used for input an integer, \n is used for a new line*/
    system("pause");
    return 0;
}