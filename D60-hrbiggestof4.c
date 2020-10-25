/*Day 60 - HackerRank:The Biggest of 4 Numbers*/
#include <stdio.h>
#include <stdlib.h>

int max_of_four(int a,int b,int c,int d)
{
    int arr[4]={a,b,c,d},i,max=arr[0];
    for(i=0;i<4;i++)
        if(arr[i]>max)
            max=arr[i];
    return max;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    system("pause");
    return 0;
}