//Day 38, array of strings
//use char[a][b], where a is the number of strings,
//and b is the characters of each string

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char NAME[3][16];
    int i;
    for(i=0;i<3;i++)
    {
        printf("Give me the name of No.%d customer:",i+1);
        scanf("%s",NAME[i]);
    }

    printf("\n");

    for(i=0;i<3;i++)
    {
        printf("Customer No.%d:%s, ",i+1,NAME[i]);
        printf("data address:%p\n",&NAME[i]);
    }
    system("pause");
    return 0;
}
