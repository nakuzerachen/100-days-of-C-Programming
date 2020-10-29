/*Day 64 - Copy One File to Another Using fput and fgets*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fptr1,*fptr2;
    char str1[150],str2[300],*ch;

    fptr1=fopen("D:\\testfile.txt","r");
    fptr2=fopen("D:\\Outputfile.txt","w");

    if((fptr1!=NULL) && (fptr2!=NULL))
    {
        while(fgets(str1,sizeof(char),fptr1)!=NULL)
            fputs(str1,fptr2);
        fclose(fptr1);
        fclose(fptr2);
        printf("Copy Complete!\n");
    }
    else
        printf("Failed to open the files.\n");
    
    system("pause");
    return 0;
}