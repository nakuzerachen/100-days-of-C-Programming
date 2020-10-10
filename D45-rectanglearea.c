/*Day 45, the area and circumference of a rectangle*/
#include <stdio.h>
#include <stdlib.h>

int rec(int a,int b,int *c, int *ar)
{
    *c=2*(a+b);
    *ar=a*b;;
    return 0;
}

int main()
{
    int a,b;
    int *cir,*ar;
    printf("Give the length and width of a rectangle, use a comma to separete them.\n");
    scanf("%d,%d",&a,&b);
    cir=&a, ar=&b;
    rec(a,b,cir,ar);
    printf("The circumference of the rectangle is %d.\n",*cir);
    printf("The area of the rectangle is %d.\n",*ar);
    system("pause");
    return 0;
}