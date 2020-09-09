/*Day 14, switch and break command*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int x,y;
    char sign;
    printf("Give me a basic equation, like 2+3.\n");
    scanf("%d%c%d",&x,&sign,&y);
    switch(sign){
        case '+':
            printf("%d + %d = %d\n",x,y,x+y);
            break;
        case '-':
            printf("%d - %d = %d\n",x,y,x-y);
            break;
        case '*':
            printf("%d * %d = %d\n",x,y,x*y);
            break;
        case '/':
            printf("%d / %d = %.7f\n",x,y,(double)x/y);
            break;
        default:
            printf("Equation input error!\n");
    }
    system("pause");
    return 0;
}