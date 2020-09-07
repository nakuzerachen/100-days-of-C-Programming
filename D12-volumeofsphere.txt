/*Day 12, calculate the volume and the surface area of a sphere*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    float r;
    double a,v;
    printf("Type in the radius of the sphere.\n");
    scanf("%f",&r);
    a=4*3.14159*r*r;
    v=(4*3.14159*r*r*r)/3;
    printf("The surface area is %6.4f, the volume is %6.4f.\n",a,v);
    system("pause");
    return 0;
}