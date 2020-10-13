/*Day 48 - Access 2D Arrays' Elements Using Pointers*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[3][4]={{1,2,3,4},
                   {5,10,15,20},
                   {25,50,75,100}};
    
    int i,j;
    for(i=0;i<3;i++)
        for(j=0;j<4;j++)
        {   
            printf("*(num+%d)+%d=%p\t",i,j,*(num+i)+j);
            //num+i=the rows of array num
            //*num+i=the first element of each row in array num
            printf("*(*(num+%d)+%d)=%d\n",i,j,*(*(num+i)+j));
            //*(*(num+i))=the value of the 1st element of each row in array num
        }
    system("pause");
    return 0;
}