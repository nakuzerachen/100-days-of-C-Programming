/*Day 22, print as many *s as you input for*/
/*3 times*/

#include <stdio.h>

int main(){
    int i=1,t=1,n;
    do
    {
        printf("Please type in an integer.\n");
        printf("The range is between 1~50.\n");
        scanf("%d",&n);
        t++;
        
        do
        {
            printf("*");
            i++;
        }   while(i<=n);
        i=0;

        printf("\n");
    }   while(t<=3);
    return 0;
}