/*Day 60 - HackerRank: Input Integers and Float Numbers*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int m,n;
    float a,b;
    scanf("%d %d",&m,&n);
    fflush(stdin);
    scanf("%f %f",&a,&b);
    printf("%d %d\n",m+n,m-n);
    printf("%.1f %.1f\n",a+b,a-b);
    system("pause");
    return 0;
}