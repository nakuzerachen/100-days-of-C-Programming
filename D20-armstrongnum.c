/*Day 20, armstrong number*/
/*Any 3-digit number abc that satisfies that*/
/*a^3+b^3+c^3=abc is an armstrong number*/

#include <stdio.h>

int main(){
    int i,sum=0;
    for(i=100;i<=999;i++){
        int a,b,c;
        a=i/100;
        b=(i%100)/10;
        c=(i%10);
        sum=(a*a*a)+(b*b*b)+(c*c*c);
        if(sum==i)
            printf("%d is an armstrong number.\n",i);
        sum=0;
    }
    return 0;
}