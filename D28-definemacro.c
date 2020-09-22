/*Day 28, use define to set a macro*/
/*Macro is a thing that can simplify multiple-step work*/
#include <stdio.h>
#include <stdlib.h>
#define CUBE (n)*(n)*(n)

int main()
{
    double n;
    printf("Give me a real number.\n");
    scanf("%lf",&n);
    printf("%lf*%lf*%lf=%.10lf\n",n,n,n,CUBE);
    system("pause");
    return 0;
}
