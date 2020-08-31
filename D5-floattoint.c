/*Day 5, convert int to float or vice versa*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    float f1=2.25f,f2=1.5f;
    int n1,n2;
    n1=(int)f1;
    n2=(int)f2;
    printf("f1/f2=%f\n",f1/f2);
    printf("n1/n2=%d\n",n1/n2);
    system("pause");
    return 0;
}