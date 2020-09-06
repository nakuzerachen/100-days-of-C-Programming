/*Day 11, use if statement*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int x;
    printf("Give me an integer.\n");
    scanf("%d",&x);
    if(x>0)
        printf("Generate code:%x\n",x*x+1);
    else
        printf("Code error!\n");
    system("pause");
    return 0;
}