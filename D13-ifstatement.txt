/*Day 13, using if statement*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int x;
    printf("Give me an integer x.\n");
    scanf("%d",&x);
    if(x>0)
        printf("%d>0\n",x);
    printf("The program ended.\n");
    system("pause");
    return 0;
}