/*Day 65 - Use Malloc() to Calculate Mean*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    double *ptr,sum=0;
    int i;
    ptr=(double *)malloc(3*sizeof(double));

    for(i=0;i<3;i++)
    {
        fflush(stdin);
        printf("Number %d=",i);
        scanf("%lf",&*(ptr+i));
        sum+=*(ptr+i);
    }

    printf("Sum=%lf,Mean=%lf\n",sum,sum/3);

    system("pause");
    return 0;
}