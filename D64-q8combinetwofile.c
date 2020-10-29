/*Day 64 - Combine Two Files Together*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fptr1,*fptr2,*fptr3;
    char ch;

    fptr1=fopen("D:\\a1.txt","r");
    fptr2=fopen("D:\\a2.txt","r");
    fptr3=fopen("D:\\a3.txt","w");

    if((fptr1!=NULL) && (fptr2!=NULL) && (fptr3!=NULL))
    {
        while((ch=getc(fptr1))!=EOF)
            putc(ch,fptr3);

        while((ch=getc(fptr2))!=EOF)
            putc(ch,fptr3);

        fclose(fptr1);
        fclose(fptr2);
        fclose(fptr3);
        printf("Copy Complete!\n");
    }
    else
        printf("Failed! Invalid Request.\n");
    
    return 0;
}