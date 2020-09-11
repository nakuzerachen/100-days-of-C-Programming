/*Day 16, type of triangles*/
#include <stdio.h>

int main(){
	int a,b,c;
	printf("Give me the 3 sides of a triangle ABC,");
	printf("from small to big, use commas to separate them.\n");
	scanf("%d,%d,%d",&a,&b,&c);
	if(a+b>c)
		if(a*a+b*b>c*c)
			printf("ABC is an acute triangle.\n");
		else if(a*a+b*b==c*c)
			printf("ABC is a right triangle.\n");
		else
			printf("ABC is an obtuse triangle.\n");
	else
		printf("The 3 sides can't form a triangle.\n");
	return 0;
}