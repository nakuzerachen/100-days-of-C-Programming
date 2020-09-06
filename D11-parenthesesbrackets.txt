/*Day 11, parentheses () as an operator*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("3-2+7*6/2 is %d.\n",3-2+7*6/2);
    printf("3-(2+7)*(6/2) is %d.\n",3-(2+7)*(6/2));/*The numbers in the brackets will be calculated first.*/
    system("pause");
    return 0;
}