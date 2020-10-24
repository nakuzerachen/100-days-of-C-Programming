/*Day 59 - HackerRank: How many Candles are the Tallest*/
#include <stdio.h>
#include <stdlib.h>

int birthdayCakeCandles(int candles_count, int* candles)
{
    int i,max=*candles,count=0;
    for(i=0;i<candles_count;i++)
        if(*(candles+i)>max)
            max=*(candles+i);
            
    for(i=0;i<candles_count;i++)
        if(*(candles+i)==max)
            count++;
    return count;
}

int main()
{
    int arr[4]={4,4,1,2};
    printf("%d\n",birthdayCakeCandles(4,arr));
    system("pause");
    return 0;
}