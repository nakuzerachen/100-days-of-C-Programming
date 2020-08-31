/*Day 5, convert int to float or vice versa*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    short int x=9,y=6;
    float z=x/y;
    printf("z=%d\n",x/y);/*the result will be only integer*/
    printf("z=%f\n",(float)x/y);/*change x to float form to generate the answer in float form*/
    system("pause");
    return 0;
}