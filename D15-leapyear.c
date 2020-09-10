/*Day 15, determine whether a year is a leap year*/
#include <stdio.h>

int main(){
	int yr;
	printf("Give me a 4-digit year.\n");
	scanf("%d",&yr);
	if(yr%4==0)
		if(yr%100==0)
			if(yr%400==0)
				if(yr%4000==0)
					printf("%d is not a leap year.\n",yr);
				else
					printf("%d is a leap year.\n",yr);
			else
				printf("%d is not a leap year.\n",yr);
		else
			printf("%d is a leap year.",yr);
	else
		printf("%d is not a leap year.\n",yr);
	return 0;	
}