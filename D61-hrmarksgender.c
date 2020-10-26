/*Day 61 - HackerRank:Marks Summation Based on Gender*/
#include <stdio.h>
#include <stdlib.h>

int marks_summation(int* marks, int number_of_students, char gender) 
{
    int i,sum=0;
    if(gender=='b')
    {
        for(i=0;i<number_of_students;i=i+2)
            sum+=*(marks+i);
    }
    else 
    {
        for(i=1;i<number_of_students;i=i+2)
            sum+=*(marks+i);
    }
    return sum;
}

int main()
{
    int arr[6]={1,3,4,2,5,3};
    char ch;
    printf("Please type in g or b.\n");
    scanf("%c",&ch);
    printf("%d\n",marks_summation(arr,6,ch));
    system("pause");
    return 0;
}