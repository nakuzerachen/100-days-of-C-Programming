/*Day 11, logic operators &&(and) and ||(or)*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    float m;
    printf("Type in your Mathematics score.\n");
    scanf("%f",&m);
    if(m<0 || m>100) /*m<0 or m>100, || means or.*/
        printf("Score error!\n");
    if(m>0 && m<60)/*m>0 and m<60, && means and.*/
        printf("You sucks!\n");
    system("pause");
    return 0;
}