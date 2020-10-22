/*Day 57 - Codewars:Summations*/
#include <stdio.h>
#include <stdlib.h>

int summation(int num) 
{
    int i,sum=0;
    for(i=0;i<num;i++)
        sum+=i;
    return sum;
}

int main()
{
    int n;
    printf("Give me a positive integer.\n");
    scanf("%d",&n);
    printf("Sum(1 to %d)=%d\n",n,summation(n));
    system("pause");
    return 0;
}