/*Day 19, print multiplication table (1*1 to 19*19)*/
#include <stdio.h>

int main(){
    int i,j;
    for(i=1;i<=19;i++){
        for(j=1;j<=19;j++){
            printf("%d*%d=%3d   ",i,j,i*j);
        }
        printf("\n");
    }
    return 0;
}