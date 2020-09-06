/*Day 11, mathematical operators - +,-,*,/,%*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int x,y;
    printf("Give me an integer x.\n");
    scanf("%d",&x);
    printf("Give me another integer y.\n");
    scanf("%d",&y);
    printf("x+y=%d\n",x+y);
    printf("x-y=%d\n",x-y);
    printf("x*y=%d\n",x*y);
    printf("x/y=%f\n",(double)x/y);
    printf("x%%y=%d\n",x%y);
    system("pause");
    return 0;
}