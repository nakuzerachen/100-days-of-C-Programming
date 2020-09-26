/*Day 31, calculate sum of 1/k! for k from 1~n*/
#include <stdio.h>
#include <stdlib.h>

double fac(int n)
{
    if(n>0)
        return n*fac(n-1);
    else
        return 1;
}

double sigma(int n)
{
    int i;
    double sum=0;
    for(i=0;i<=n;i++)
        sum=sum+1/fac(i);
    return sum;
}

int main(){
    int n;
    double sum;
    printf("Give me a positive integer.\n");
    scanf("%d",&n);
    sum=sigma(n);
    printf("sum=%.12lf\n",sum);
    system("pause");
    return 0;
}