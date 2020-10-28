/*Day 63 - Read a Binary File without Buffer Zone*/
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
        char name[25];
        int math;
    }student;
    f1=open("D:\\score.bin",O_RDONLY|O_BINARY);

    if(f1!=-1)
    {
        read(f1,&student,sizeof(student));
        printf("student.name=%s\n",student.name);
        printf("student.math=%d\n",student.math);
        close(f1);
    }
    else
        printf("Failed! Invalid Request.\n");

    system("pause");
    return 0;
    
}