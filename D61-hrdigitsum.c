/*Day 61 - HackerRank:The Sum of Digits*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n,dgts,sum=0,i;
    scanf("%d", &n);
    dgts=1+log10(n);
    for(i=1;i<=dgts;i++)
    {
        sum+=n%10;
        n/=10;
    }
    printf("%d\n",sum);
    return 0;
}