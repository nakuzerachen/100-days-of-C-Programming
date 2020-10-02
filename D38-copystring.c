/*Day 38, copy a string*/
#include <stdio.h>
#include <stdlib.h>
#define MAX 3
#define LENGTH 16

int main()
{
    char A[MAX][LENGTH],B[MAX][LENGTH];
    int i,j;
    for(i=0;i<MAX;i++)
    {
        printf("Give me a name:");
        gets(A[i]);
    }

    printf("Copying...\n");

    for(i=0;i<MAX;i++)/*Copy A to B*/
    {
        for(j=0;j<LENGTH;j++)
        {
            if(A[i][j]=='\0')
                break;//jump to Line 28
            else
                B[i][j]=A[i][j];
        }
        B[i][j]='\0';
    }

    printf("\n");

    for(i=0;i<3;i++)
        printf("B[%d]=%s\n",i,B[i]);
    
    system("pause");
    return 0;
}