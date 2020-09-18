/*Day 23, using for statement to detect*/
/*invalid password and jump out*/
#include <stdio.h>

int main(){
    int passwd=2718,i,enter;
    for(i=1;i<=3;i++)
    {
        printf("Please type in the password: ");
        scanf("%d",&enter);
        if(enter==passwd)
        {
            printf("Password correct! ");
            printf("Welcome to the system.\n");
            break;
        }
        else if(enter!=passwd && i<3)
        {
            printf("Password incorrect.\n");
            continue;
        }
        else
        {
            printf("Password incorrect over 3 times.\n");
        }
    }
    return 0;
}