/*Day 63 - Codewars:Are a Number even?*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

bool is_even(double n)
{
    if(fmod(n,2)==0 && (int)n==n)
        return true;
    else
        return false;    
}

int main()
{
    double n;
    scanf("%lf",&n);
    printf("%d\n",is_even(n));
    return 0;
}