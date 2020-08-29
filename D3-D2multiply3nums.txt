/*Day 3, multiply 3 integers*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int x,y,z,prod;
    scanf("%d*%d*%d",&x,&y,&z);
    prod=x*y*z;
    printf("%d*%d*%d=%d\n",x,y,z,prod);
    system("pause");
    return 0;
}