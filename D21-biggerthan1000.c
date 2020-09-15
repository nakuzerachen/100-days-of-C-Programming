/*Day 21, determine at which number will*/
/*the sum of 1+2+3+...+n>1000*/
#include <stdio.h>

int main(){
    int i=1,sum=0;
    do
    {
        sum+=i;
        printf("i=%d,sum=%d\n",i,sum);
        i++;
    }   while(sum<1000);
    
    printf("i=%d,sum exceeds 1000.\n",i-1);
    return 0;
}