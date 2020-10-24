/*Day 59 - HackerRank:Evaluate the Min and Max Sum of 4 Numbers in an Array*/
#include <stdio.h>
#include <stdlib.h>

void miniMaxSum(int arr_count, int* arr) 
{
    long long i,mins=0,maxs=0,sum=0;
    for(i=0;i<arr_count;i++)
        sum+=*(arr+i);
    mins=sum;
    for(i=0;i<arr_count;i++)
    {
        if(sum-*(arr+i)<mins)
            mins=sum-*(arr+i);
        if(sum-*(arr+i)>maxs)
            maxs=sum-*(arr+i);
    }
    printf("%lld %lld\n",mins,maxs);
}

int main()
{
    int arr[5]={231,69,7,1000,23};
    miniMaxSum(5,arr);
    system("pause");
    return 0;
}