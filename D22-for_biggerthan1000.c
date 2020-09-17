/*Day 22, using for to judge at which number*/
/*will 1+2+3+...+1000 exceed 1000*/

#include <stdio.h>

int main(){
    int i,n=1000,sum=0;
    for(i=1;sum<1000;i++){
        sum+=i;
        printf("i=%d,sum=%d\n",i,sum);
    }
    printf("\n");
    printf("When i=%d, sum exceed 1000.\n",i-1);
    return 0;
}