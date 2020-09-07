/*Day 12, simple expressions +=*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int x,y;
    printf("Give me an integer x.\n");
    scanf("%d",&x);
    printf("Give me an integer y.\n");
    scanf("%d",&y);
    printf("Before calculation, x=%d,y=%d\n",x,y);
    x+=y;/*Same as x=x+y*/
    printf("After calculation, x=%d,y=%d\n",x,y);
    system("pause");
    return 0;
}