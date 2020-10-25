/*Day 60 - Copy One File to Another*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fptr1,*fptr2;
    char ch;

    fptr1=fopen("D:\\testfile.txt","r");
    fptr2=fopen("D:\\Outputfile.txt","w");

    if((fptr1!=NULL) && (fptr2!=NULL))
    {
        while((ch=getc(fptr1))!=EOF)
            putc(ch,fptr2);
        fclose(fptr1);
        fclose(fptr2);
        printf("Copy Complete!\n");
    }
    else
        printf("Failed to open the files.\n");
    
    system("pause");
    return 0;
}