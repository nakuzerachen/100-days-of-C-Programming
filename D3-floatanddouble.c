/*Day 3, float and double*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int i=32767;/*int, 4 bytes*/
    float f=3.14159;/*float, 4 bytes, [1.2e-38,3.4e38]*/
    double d=2.718281828459045;/*double, 8 bytes, [2.2e-308,1.8e308]*/
    printf("i=%d\n",i);
    printf("f=%.5f\n",f);/*%f is for float and double, .n represents nth number after the point*/
    printf("d=%.15f\n",d);
    system("pause");
    return 0;
}