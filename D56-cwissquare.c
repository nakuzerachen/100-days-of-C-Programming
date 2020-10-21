/*Day 56 - Codewars Q1 : Determine whether a number is a squared number*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

bool is_square(int n) 
{
    int rt=sqrt(n);
    if(rt*rt==n)
        return 1;
    else
        return 0;
}

int main()
{
    int n;
    printf("Please input an integer.\n");
    scanf("%d",&n);
    if(is_square(n)==1)
        printf("%d is a squared number.\n",n);
    else
        printf("%d is not a squared number.\n",n);
    
    system("pause");
    return 0;
}