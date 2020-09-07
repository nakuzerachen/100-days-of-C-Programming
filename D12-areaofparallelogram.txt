/*Day 12, calculate the area of parallelogram*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    float b,h;
    double area;
    printf("Please type in the base of the parallelogram.\n");
    scanf("%f",&b);
    printf("Please type in the height of the parallelogram.\n");
    scanf("%f",&h);
    area=b*h;
    printf("The area of the parallelogram is %f.\n",area);
    system("pause");
    return 0;
}