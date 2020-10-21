/*Day 54 - Typedef Alternative Way*/
#include <stdio.h>
#include <stdlib.h>

typedef struct data
{
    char name[25];
    int eng;
}SCORE;//can't replaced with #define

int display(SCORE st)
{
    printf("Name:%s\n",st.name);
    printf("English score:%d\n",st.eng);
    return 0;
}

int main()
{

    SCORE s1={"Jack",97};
    SCORE s2={"Sam",96};

    display(s1);
    printf("\n");
    display(s2);

    system("pause");
    return 0;
}