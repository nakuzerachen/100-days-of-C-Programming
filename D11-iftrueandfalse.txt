/*Day 11, 1(true) in if*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    if(5>4)
        printf("5>4 is true.\n");
    if(1)/*The number in the if can be other than 0, it will be regarded as true*/
        printf("This line will be executed.\n");
    
    printf("The bool of 4=3 is %d.\n",4==3);/*4!=3, so the return value will be 0(false)*/
    system("pause");
    return 0;
}