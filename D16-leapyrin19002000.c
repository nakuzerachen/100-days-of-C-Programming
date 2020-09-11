/*Day 16, leap years between 1900~2000*/
#include <stdio.h>

int main(){
	int yr=1900;
	start:
		if(yr%4==0)
			if(yr%100==0)
				if(yr%400==0)
					printf("%d\n",yr);
				else
					printf(" ");
			else
				printf("%d\n",yr);
		else
			printf(" ");
		if(yr<2000){	
			yr=yr+4;
			goto start;
		}
	return 0;
}