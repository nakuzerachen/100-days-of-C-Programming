/*Day 62 - Read the file that has been input with words*/
#include <stdio.h>
#include <stdlib.h>
#define MAX 80
int main()
{
    FILE *fptr;
    char str[MAX];
    int bytes;
    fptr=fopen("D:\\Outputfile.txt","r");

    while(!feof(fptr)) //Not the end of file
    {
        bytes=fread(str,sizeof(char),MAX,fptr);
        if(bytes<MAX)
            str[bytes]='\0';
        printf("%s\n",str);
    }
    fclose(fptr);

    system("pause");
    return 0;
}