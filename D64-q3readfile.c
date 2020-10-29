/*Day 64 - Read a File*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fptr;
    char str[300],ch;
    fptr=fopen("D:\\testfile.txt","r");

    if(fptr!=NULL)
    {
        while(fgets(str,5,fptr)!=NULL)
            printf("%s",str);
        fclose(fptr);
    }
    else
        printf("Failed! Invalid Request.\n");
    
    return 0;
}