/*Day 12, an example of the auto-conversion of data type in numbers*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    short i=2;
    int x=12,y=64;
    float a=1.414f,b=2.718f;
    double p=4.32135,q=6.43421;
    printf("(i-a)+(y/b)*(x/p)+q=%f\n",(i-a)+(y/b)*(x/p)+q);
    printf("The size is %d\n",sizeof((i-a)+(y/b)*(x/p)+q));
    system("pause");
    return 0;
}