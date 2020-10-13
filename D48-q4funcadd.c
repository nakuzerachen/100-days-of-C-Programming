/*Day 48 - Use a Function to Print the Addresses of 
a Variable and a Pointer*/
#include <stdio.h>
#include <stdlib.h>

int address(float *x)
{
    printf("At address %p, the variable is %.3f.\n",x,*x);
    return 0;
}

int main()
{
    float pi=3.14f;
    float *ptr=&pi;
    address(&pi);
    address(ptr);
    system("pause");
    return 0;
}