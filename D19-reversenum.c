/*Day 19, reverse a number*/
#include <stdio.h>

int main(){
    int i,r,c16;

    while(1){   /*1 means true, so it means that when the bool value is 1, the statement is always true*/
        do{
            printf("Input an integer: \n");
            scanf("%d",&i);
        }   while(i<=0);
        
        printf("The reverse number is: ");
        while(i!=0){
            int r=i%10;
            i/=10;
            printf("%d",r);
        }
        printf("\n\n");
    }
    return 0;
}