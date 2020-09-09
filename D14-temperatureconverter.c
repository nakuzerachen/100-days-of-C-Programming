/*Day 14, temperature converter using switch and break*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    float temp,c,f,k;
    char unit;
    printf("What is the temperature?\n");
    scanf("%f %c",&temp,&unit);
    switch(unit){
        case 'C':
            k=temp+273.15;
            f=(9*temp/5)+32;
            printf("%f %c equals to %.3f K and %.3f F.\n",temp,unit,k,f);
            break;
        case 'F':
            c=5*(temp-32)/9;
            k=c+273.15;
            printf("%f %c equals to %.3f K and %.3f C.\n",temp,unit,k,c);
            break;
        case 'K':
            c=temp-273.15;
            f=(9*c/5)+32;
            printf("%f %c equals to %.3f C and %.3f F.\n",temp,unit,c,f);
            break;
        default:
            printf("Temperature input error!\n");
    }
    system("pause");
    return 0;
}