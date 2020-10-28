/*Day 63 - Binary File without Buffer Zone*/
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <io.h>
#include <sys/stat.h>

int main()
{
    int f1;
    struct data
    {
        char name[20];
        int math;
    }student={"Sam",98};

    f1=open("D:\\score.bin",O_CREAT|O_WRONLY|O_BINARY,S_IREAD);
    if((f1!=-1))
    {
        write(f1,&student,sizeof(student));
        close(f1);
        printf("Writing Finished!\n");
    }
    else
        printf("Failed! Invalid Request.\n");
    
    system("pause");
    return 0;
}