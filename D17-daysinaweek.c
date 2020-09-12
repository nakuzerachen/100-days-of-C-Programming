/*Day 17, work day or rest day?*/
#include <stdio.h>

int main(){
	char d;
	printf("Give me an integer between 1~7.\n");
	scanf("%c",&d);
	switch(d){
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
			printf("Today is a work day.\n");
			break;
		case '6':
		case '7':
			printf("Today is a break day.\n");
			break;
		default:
			printf("Input error!\n");
	}
	return 0;
}