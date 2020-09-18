/*Day 23, find the minimum x that satisfies that*/
/*x=3a+1, x=5b+3, x=7c+2, where a,b,c are integers*/
#include <stdio.h>

int main(){
    int i=2,x;
    do
    {
        if(i%3==1 && i%5==3 && i%7==2){
            x=i;
            printf("x=%d\n",x);
            printf("%d/3=%d...1\n",x,x/3);
            printf("%d/5=%d...3\n",x,x/5);
            printf("%d/7=%d...2\n",x,x/7);
            break;
        }
        else{
            i++;
        }
    }   while(i<=100);
    return 0;
}