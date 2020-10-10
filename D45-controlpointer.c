/*Day 45, control pointers by editing variables*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=17,b=99;
    int *ptra,*ptrb;
    ptra=&a,ptrb=&b;//1st step:set address
    printf("a=%d, b=%d, *ptra=%d, *ptrb=%d, ptra=%p, ptrb=%p\n",a,b,*ptra,*ptrb,ptra,ptrb);
    *ptra=20,*ptrb=101;//2nd step:change pointer value
    printf("a=%d, b=%d, *ptra=%d, *ptrb=%d, ptra=%p, ptrb=%p\n",a,b,*ptra,*ptrb,ptra,ptrb);
    a=71;//3rd step:change original variable
    printf("a=%d, b=%d, *ptra=%d, *ptrb=%d, ptra=%p, ptrb=%p\n",a,b,*ptra,*ptrb,ptra,ptrb);
    ptra=ptrb;//4th step:set pointer addresses to the same
    printf("a=%d, b=%d, *ptra=%d, *ptrb=%d, ptra=%p, ptrb=%p\n",a,b,*ptra,*ptrb,ptra,ptrb);
    *ptra=1;//set value of ptra to 1
    printf("a=%d, b=%d, *ptra=%d, *ptrb=%d, ptra=%p, ptrb=%p\n",a,b,*ptra,*ptrb,ptra,ptrb);
    ptra=&a;
    printf("a=%d, b=%d, *ptra=%d, *ptrb=%d, ptra=%p, ptrb=%p\n",a,b,*ptra,*ptrb,ptra,ptrb);
    a=44;
    printf("a=%d, b=%d, *ptra=%d, *ptrb=%d, ptra=%p, ptrb=%p\n",a,b,*ptra,*ptrb,ptra,ptrb);
    *ptrb=*ptra+10;
    printf("a=%d, b=%d, *ptra=%d, *ptrb=%d, ptra=%p, ptrb=%p\n",a,b,*ptra,*ptrb,ptra,ptrb);
    ptrb=&a;
    printf("a=%d, b=%d, *ptra=%d, *ptrb=%d, ptra=%p, ptrb=%p\n",a,b,*ptra,*ptrb,ptra,ptrb);
    system("pause");
    return 0;
}