/*Day 20, use continue to return to the beginning of loop*/
#include <stdio.h>

int main(){
    int i,sum=0;
    for(i=1;i<=10;i++){
        if(i%3==0)
        continue;
        sum+=i;
        printf("i=%d,sum=%d\n",i,sum);
    }
    printf("\n");
    printf("i=%d\t",i);
    printf("sum=%d\n",sum);
    return 0;
}