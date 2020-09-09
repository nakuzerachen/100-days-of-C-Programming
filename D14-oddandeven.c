/*Day 14, determine whether a number is even or not*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int x;
    printf("Give me an integer.\n");
    scanf("%d",&x);
    if(x%2==0)
        printf("%d is an even number.\n",x);
    else
        printf("%d is an odd number.\n",x);
    system("pause");
    return 0;
}