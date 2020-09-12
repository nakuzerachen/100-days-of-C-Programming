/*Day 17, determine the input type (character or num)*/
#include <stdio.h>

int main(){
	char ch;
	int a;
	printf("Please input a character.\n");
	scanf("%c",&ch);
	a=(int)ch;
	if((a>=48)&&(a<=57))
		printf("%c is a number.\n",ch);
	else if(((a>=65)&&(a<=90))||((a>=97)&&(a<=122)))
		printf("%c is an alphabet.\n",ch);
	else
		printf("Input error!");
	return 0;
}