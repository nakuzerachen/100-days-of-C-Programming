/*Day 48 - Pointer that Points to a Pointer*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=7,*p,**pp;
    p=&n;//p=the address of n
    pp=&p;//pp=the address of p
    printf("n=%d,&n=%p,\n",n,&n);
    printf("*p=%d,p=%p,&p=%p\n",*p,p,&p);
    printf("**pp=%d,*pp=%p,pp=%p,&pp=%p\n",**pp,*pp,pp,&pp);
    //*pp=*(&p)=p=&n
    system("pause");
    return 0;
}