/*Day 16, determine whether 3 nums can form a triangle*/
#include <stdio.h>

int main(){
	int a,b,c;
	printf("Give me the three sides of the triangle, from small to big, use commas to separete each number.\n");
	scanf("%d,%d,%d",&a,&b,&c);
	if(a+b>c)
		printf("This 3 numbers can form a triangle.\n");
	else
		printf("This 3 nums can't form a triangle.\n");
	return 0;	
}