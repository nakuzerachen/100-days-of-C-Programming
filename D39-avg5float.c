/*Day 39, input 5 float numbers in an array
and print their average out*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float R[5],sum;
    int i;
    for(i=0;i<5;i++)
    {
        printf("Give me the value of R[%d]:",i);
        scanf("%f",&R[i]);
    }

    for(i=0;i<5;i++)
        sum+=R[i];

    printf("The average of these 5 numbers is %f\n",sum/5);

    system("pause");
    return 0;    
}