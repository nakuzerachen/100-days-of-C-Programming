/*Day 28, define macro function*/
#include <stdio.h>
#include <stdlib.h>
#define F(n) (n)*(n)-1

int main(){
    double c;
    printf("Give me a real number.\n");
    scanf("%lf",&c);
    printf("(%lf*%lf)-1=%.10lf\n",c,c,F(c));
    system("pause");
    return 0;
}