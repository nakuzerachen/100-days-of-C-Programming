/*Day 60 - File Management Function*/
#include <stdio.h>//FMF is in stdio.h
#include <stdlib.h>

int main()
{
    FILE *fptr;
    char ch;
    int count=0;

    fptr=fopen("D:\\testfile.txt","r");
    if(fptr!=NULL)
    {
        while((ch=getc(fptr))!=EOF)
        {
            printf("%c",ch);
            count++;
        }
        fclose(fptr);
        printf("\n%d characters.\n",count);
    }
    else
        printf("Failed to open the file.\n");

    system("pause");
    return 0;
}