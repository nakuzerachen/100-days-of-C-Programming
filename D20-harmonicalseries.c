/*Day 20, sum of 1+(1/2)+(1/3)+...+(1/n)*/
#include <stdio.h>

int main()
{
    int i,n;
    double sum=0;
    do{
        printf("Please type in a positive integer.\n");
        scanf("%d",&n);
    }   while(n<=0);
    
    for(i=1;i<=n;i++)
    {
        sum=sum+(1/(double)i);
        printf("i=%3d,sum=%.7f\n",i,sum);
    }
    printf("\n");
    printf("sum=%.7f\n",sum);
    return 0;
}