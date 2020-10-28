/*Day 63 - Read a Binary File*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a,b;
    int i,num[3];
    FILE *fptr;

    fptr=fopen("D:\\number.bin","rb");
    fread(&a,sizeof(double),1,fptr);
    fread(&b,sizeof(double),1,fptr);
    fread(num,sizeof(int),3,fptr);

    printf("a=%.2lf\n",a);
    printf("b=%.2lf\n",b);
    for(i=0;i<3;i++)
        printf("a[%d]=%d\n",i,num[i]);
    system("pause");
    return 0;
}