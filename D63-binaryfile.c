/*Day 63 - Binary Files*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a=3.14,b=6.28;
    int arr[]={12,43,64};

    FILE *fptr;
    fptr=fopen("D:\\number.bin","wb");
    if(fptr!=NULL)
    {    
        fwrite(&a,sizeof(double),1,fptr);
        fwrite(&b,sizeof(double),1,fptr);
        fwrite(arr,sizeof(int),3,fptr);
        fclose(fptr);
    
        printf("Writing Finished!\n");
    }
    else
        printf("Failed! Invalid Request.\n");

    system("pause");
    return 0;
}