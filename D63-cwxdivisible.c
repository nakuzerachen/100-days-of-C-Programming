/*Day 63 - Codewars:Is n divisible by x and y?*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool isDivisable(int n,int x,int y)
{
    if(n%x==0 && n%y==0)
        return true;
    else
        return false;
}

int main()
{
    int n,x,y;
    scanf("%d %d %d",&n,&x,&y);
    printf("%d\n",isDivisable(n,x,y));
    system("pause");
    return 0;
}
