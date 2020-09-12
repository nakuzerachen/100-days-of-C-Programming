/*Day 17, determine 10 students' grade level(A,B,C)*/
#include <stdio.h>

int main(){
	int sc;
	printf("Please key in the grade.\n");
	scanf("%d",&sc);
	if((sc>=80)&&(sc<=100))
		printf("Rank A.\n");
	else if((sc>=60)&&(sc<=79))
		printf("Rank B.\n");
	else
		printf("Rank C.\n");
	return 0;
}