/*Day 20, calculate the value of*/
/*1^2-2^2+3^2-4^2+...+47^2-48^2+49^2-50^2*/

#include <stdio.h>

int main()
{
    int i,psum=0,nsum=0,sum=0;
    for(i=1;i<=50;i++)
    {
        if(i%2!=0)
        {
            psum=psum+(i*i);
            printf("i=%d,psum=%d,nsum=(%d)\n",i,psum,nsum);
        }
        else
        {
            nsum=nsum-(i*i);
            printf("i=%d,psum=%d,nsum=(%d)\n",i,psum,nsum);
        }
    }
    sum=psum+nsum;
    printf("\nsum=%d\n",sum);
    return 0;
}