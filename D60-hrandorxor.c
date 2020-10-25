/*Day 60 - HackerRank:And, Or, Xor*/
#include <stdio.h>
#include <stdlib.h>

void calculate_the_maximum(int n, int k)
{
    int i,j,a,x,or1,count=-1,mand=0,mxor=0,mor=0;
    for(i=1;i<n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            a=i&j;
            x=i^j;
            or1=i|j;
            if(a>mand&&a<k)
                mand=a;
            if(x>mxor&&x<k)
                mxor=x;
            if(or1>mor&&or1<k)
                mor=or1;
        }
    }
    printf("%d\n",mand);
    printf("%d\n",mor);
    printf("%d\n",mxor);
}

int main() 
{
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}