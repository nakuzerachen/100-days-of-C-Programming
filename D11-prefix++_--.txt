/*Day 11, operator ++ and --*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int a=1,b=1,c=2,d=2;
    printf("a=%d",a);
    printf(", a++ is %d, a becomes %d.\n",a++,a);/*The code will run first, then assign a+1 to variable a*/
    printf("b=%d",b);
    printf(", b-- is %d, b becomes %d.\n",b--,b);
    printf("c=%d",c);
    printf(", ++c is %d, c becomes %d.\n",++c,c);/*c+1 will first be assigned to c, then the code will finish running*/
    printf("d=%d",d);
    printf(", --d is %d, d becomes %d.\n",--d,d);
    system("pause");
    return 0;
}