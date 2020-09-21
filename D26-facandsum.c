/*Day 26, multiple functions*/
/*Factorial n! and Summation 1+2+3+...+n*/
#include <stdio.h>
#include <stdlib.h>

int fac(int n){
    int i,pro=1;
    if(n==0)
        return 1;
    for(i=1;i<=n;i++)
        pro*=i;
    return pro;
}

int sigma(int n){
    int i,sum=0;
    for(i=1;i<=n;i++)
        sum+=i;
    return sum;
}

int main(){
    int i,n,pro=1,sum=0;
    printf("Give me a positive integer n.\n");
    scanf("%d",&n);
    pro=fac(n);
    sum=sigma(n);
    printf("%d!=%d\n",n,pro);
    printf("1+2+...+%d+%d=%d\n",n-1,n,sum);
    system("pause");
    return 0;
}