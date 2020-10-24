/*Day 59 - HackerRank:Grading Students*/
#include <stdio.h>
#include <stdlib.h>

int* gradingStudents(int grades_count, int* grades, int* result_count) 
{
    int i,q;
    *result_count=grades_count;
    static int new[60];
    for(i=0;i<grades_count;i++)
    {
        q=*(grades+i)/5;
        if(5*(q+1)-*(grades+i)<3&&*(grades+i)>37)
            *(grades+i)=5*(q+1);
        *(new+i)=*(grades+i);
    }
    return new;
}

int main()
{
    int arr[4]={0,4,3,2},N[4];
    gradingStudents(4,arr,N);
    system("pause");
    return 0;
}