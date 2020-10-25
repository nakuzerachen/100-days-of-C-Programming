/*Day 60 - Write New Lines to a File*/
#include <stdio.h>
#include <conio.h> //need to use getche()
#include <stdlib.h>
#define ENTER 13
#define MAX 100

int main()
{
    FILE *fptr;
    int i=0;
    char str[MAX],ch;
    fptr=fopen("D:\\testfile.txt","a");
    if(fptr!=NULL)
    {
        printf("Please Input Strings, Press enter to Leave.\n");
        while((ch=getche())!=ENTER && i<MAX)
            str[i++]=ch;

        putc('\n',fptr); //Insert a New Line
        fwrite(str,sizeof(char),i,fptr);
        fclose(fptr);
        printf("\nFinish Input New Lines.\n");
    }
    else
        printf("Failed to open the file.\n");
    
    system("pause");
    return 0;
}