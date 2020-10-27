/*Day 62 - No Buffer Zone File Management*/
#include <fcntl.h>
#include <io.h>
#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>
#define SIZE 512

int main()
{
    char buffer[SIZE];
    int f1,f2,bytes;
    f1=open("D:\\Outputfile.txt",O_RDONLY|O_TEXT);
    f2=creat("D:\\output2.txt",S_IWRITE);

    if((f1!=-1)&&(f2!=-1))
    {
        while(!eof(f1))
        {
            bytes=read(f1,buffer,SIZE);
            write(f2,buffer,bytes);
        }
        close(f1);
        close(f2);
        printf("Copy Complete!\n");
    }
    else
        printf("Failed to open the files.\n");

    system("pause");
    return 0;
}