/*Day 23, invalid password and jump out*/
#include <stdio.h>

int main(){
    int passwd=2718,i=0,enter;
    do
    {
        printf("Please type in the password: ");
        scanf("%d",&enter);
        i++;
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
            printf("Password incorrect over 3 times!\n");
            break;
        }
        
    }   while(i<=3);
    return 0;
}