/*Day 17, which month to which season*/
#include <stdio.h>

int main(){
	int mth;
	printf("What month does today belong to?\n");
	scanf("%d",&mth);
	if((mth>=3)&&(mth<=5))
		printf("It is spring.\n");
	else if((mth>=6)&&(mth<=8))
		printf("It is summer.\n");
	else if((mth>=9)&&(mth<=11))
		printf("It is autumn.\n");
	else if((mth==12)||(mth==1)||(mth==2))
		printf("It is winter.\n");
	else
		printf("Input month error!\n");
	return 0;
}