/*Day 69 - Array of Series*/
#include <stdio.h>
#include <stdlib.h>

int Series(int b)
{
    int sum=0,i=0;
    while(i<=b)
    {
        sum+=i;
        i++;
    }
    return sum;
}

int abs(int n)
{
    if(n<0)
        return -n;
    else
        return n;
}

int *returnarray(int n)
{
    int *arr,i,count;
    count=abs(n)+1;
    arr=(int *)malloc(count*sizeof(int));
    for(i=0;i<count;i++)
    {
        if(abs(n)!=n)
            *(arr+i)=-Series(i);
        else
            *(arr+i)=Series(i);
    }
    return arr;
}

int main()
{
    int n,*arr,count,i;
    printf("Give me an integer.\n");
    scanf("%d",&n);

    count=abs(n)+1;
    arr=returnarray(n);

    for(i=0;i<count;i++)
        printf("%d ",*(arr+i));

    printf("\n");
    return 0;
}