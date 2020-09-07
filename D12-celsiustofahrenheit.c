/*Day 12, celsius to fahrenheit converter*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    float c,f;
    printf("Please type in the temperature in Celsius degree.\n");
    scanf("%f",&c);
    f=(9*c/5)+32;
    printf("% 4.2f C = % 4.2f F\n",c,f);
    system("pause");
    return 0;
}