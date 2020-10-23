/*Day 58 - HackerRank:Compare Two Arrays and Give Points*/
#include <stdio.h>
#include <stdlib.h>

int* compare(int a_count, int* a, int b_count, int* b, int* result_count) 
{
    int i,aw=0,bw=0;
    for(i=0;i<5;i++)
    {
        if(*(a+i)>*(b+i))
            aw++;
        else if(*(a+i)<*(b+i))
            bw++;
    }
    static int R[2];
    R[0]=aw;
    R[1]=bw;
    for(i=0;i<2;i++)
        printf("R[%d]=%d\n",i,R[i]);
    *result_count=2;
    return R;
}

int main()
{
    int A[5]={24,21,25,28,15};
    int B[5]={26,25,23,26,13};
    int W[2];
    compare(5,A,5,B,W);
    system("pause");
    return 0;
}
