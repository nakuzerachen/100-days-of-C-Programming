/*Day 4, print floating point(real number)*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    float r1=1.5342f;/*Better add f or F after a float data*/
    float r2=4.4332e3f;/*e3 means the 3rd power of 10*/
    printf("r1=%f\n",r1);
    printf("r2=%e\n",r2);/*number labelled %e will be represented in exponential form*/
    system("pause");
    return 0;
}