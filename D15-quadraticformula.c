/*Day 15, solve for x in ax^2+bx+c=0,a!=0*/
#include <stdio.h>
#include <math.h>

int main(){
	float a,b,c;
	double D,x1,x2;
	printf("Give me the a,b,c in ax^2+bx+c=0, use comma to separate them.\n");
	scanf("%f,%f,%f",&a,&b,&c);
	D=(b*b-4*a*c);
	if(D>0){
		x1=(-b+sqrt(D))/(2*a);
		x2=(-b-sqrt(D))/(2*a);
		printf("x1=%f\tx2=%f\n",x1,x2);
	}
	else if(D==0){
		x1=(-b)/(2*a);
		printf("x1=x2=%f\n",x1);
	}
	else 
		printf("No real roots for this formula.\n");
	return 0;
}