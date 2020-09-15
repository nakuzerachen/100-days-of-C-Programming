/*Day 20, use break to stop the loop*/
#include <stdio.h>

int main(){
    int i,sum=0;
    for(i=1;i<=10;i++){
        if(i%3==0){
            break;
        }
        sum+=i;
    }
    printf("sum=%d\n",sum);
    printf("i=%d\n",i);
    return 0;
}