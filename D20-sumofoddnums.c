/*Day 20, calculate the sum of 1+3+5+7+...+n*/
#include <stdio.h>

int main(){
    int i,n,sum=0;
    do{
        printf("Please type in an odd positive integer.\n");
        scanf("%d",&n);
    }   while(n<=0||n%2==0);
    for(i=1;i<=n;i=i+2)
        sum+=i;
    printf("1+3+5+...+%d+%d=%d\n",n-2,n,sum);
    return 0;
}