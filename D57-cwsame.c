/*Day 57 - Codewars: Determine whether Two Arrays are "Same"*/
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool comp(int *a, int *b, size_t n)
{
    unsigned int i,j,count,ctt=0;
    for(i=0;i<n;i++)
    {
        count=0;
        for(j=0;j<n;j++)
        {
            if(*(b+i)==*(a+j)**(a+j))
                count++;
        }
        if(count>0)
            ctt++;
    }
    printf("%d times\n",ctt);
    if(ctt==n)
        return true;
    else
        return false;
}

int main()
{
    int a[5] = {4,7,11,3,22};
    int b[5] = {484,9,49,121,16};
    comp(a,b,5);
    if(comp(a,b,5)==true)
        printf("A & B are same.\n");
    else
        printf("A & B aren't the same.\n");
    system("pause");
    return 0;
}