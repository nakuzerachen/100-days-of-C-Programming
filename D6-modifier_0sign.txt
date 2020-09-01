/*Day 6, 0 as a modifier in printf function*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    long int x,y,z,sum;
    x=1500000000L;
    y=500000000L;
    z=5000000L;
    sum=x+y+z;
    printf("x=%010d\n",x);/*modifier 0 will put zero in front of the values, in this instance there are 10 decimels.*/
    printf("y=%010d\n",y);
    printf("z=%010d\n",z);
    printf("sum=%010d\n",sum);
    system("pause");
    return 0;
}