/*Day 23, print out ____1,___12,__123,...*/
#include <stdio.h>

int main()
{
    int i,j,k;
    for(i=1;i<=5;i++)
    {
        for(j=5;j>i;j--)
        {
            printf(" ");
        }
        
        for(k=1;k<=i;k++)
        {
            printf("%d",k);
        }
        printf("\n");
    }
    return 0;
}