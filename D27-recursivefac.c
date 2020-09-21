/*Day 27, use recursive function to calculate n!*/
#include <stdio.h>
#include <stdlib.h>

int fac(unsigned int n)
{
    if(n>0)
        return (n*fac(n-1));
    else
        return 1;
}

int main(){
    unsigned int n;
    printf("Please type in a positive integer.\n");
    scanf("%d",&n);
    printf("%d!=%d\n",n,fac(n));
    system("pause");
    return 0;
}