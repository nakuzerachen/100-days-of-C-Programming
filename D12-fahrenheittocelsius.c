/*Day 12, fahrenheit to celsius converter*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    float f,c;
    printf("Please type in the temperature in Fahrenheit degree.\n");
    scanf("%f",&f);
    c=5*(f-32)/9;
    printf("% 4.2f F = % 4.2f C\n",f,c);
    system("pause");
    return 0;
}