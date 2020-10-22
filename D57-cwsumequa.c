/*Day 57 - Codewars:Summations (Equation)*/
#include <stdio.h>
#include <stdlib.h>

int summation(int num) 
{
    return num*(num++)/2;
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