/*Day 64 - Copy One File to Another and Count the Number*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fptr1,*fptr2;
    char ch;
    int count=0;

    fptr1=fopen("D:\\testfile.txt","r");
    fptr2=fopen("D:\\Outputfile.txt","w");

    if((fptr1!=NULL) && (fptr2!=NULL))
    {
        while((ch=getc(fptr1))!=EOF)
        {
            putc(ch,fptr2);
            count++;
        }
        fclose(fptr1);
        fclose(fptr2);
        printf("Copy Complete! %d characters copied\n",count);
    }
    else
        printf("Failed to open the files.\n");
    
    system("pause");
    return 0;
}