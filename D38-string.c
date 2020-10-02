/*Day 38, inputting strings*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch='M';/*char, 1 byte*/
    char str[]="M";/*M+\0, 2 bytes*/
    char A[]={'M','a','t','h','\0'};/*\0 should be put at the last*/
    char B[]="Math";

    printf("ch=%c, size=%d\n",ch,sizeof(ch));
    printf("str=%s, size=%d\n",str,sizeof(str));
    printf("A=%s, size=%d\n",A,sizeof(A));
    printf("B=%s, size=%d\n",B,sizeof(B));

    system("pause");
    return 0;
}