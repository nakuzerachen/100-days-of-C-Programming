/*Day 7, change the date by using conversion of number*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    short int d,m,yr;
    printf("What date is today?(yyyy/m/d)\n");
    scanf("%d/%d/%d",&yr,&m,&d);
    printf("The date you input is %d/%d/%d\n",yr,m,d);
    printf("The code of today is %x-%x-%x\n",7*yr*(m+d),2*m*d,m*m+d*d+21*m*d);
    system("pause");
    return 0;
}