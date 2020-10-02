/*Day 38, convert lower case alphabets to CAPITAL*/
#include <stdio.h>
#include <stdlib.h>

int CAP(char str[])
{
    int i=0;
    while(str[i]!='\0')
    {
        if(str[i]>=97 && str[i]<122)/*ASCII of a~z are 97~122*/
            str[i]=str[i]-32;/*ASCII of A~Z are 65~90*/
        i++;
    }
    return 0;
}

int main()
{
    char A[15];

    printf("Please input a string:");
    scanf("%s",A);
    CAP(A);
    printf("CAPITALIZED:%s\n",A);
    system("pause");
    return 0;
}