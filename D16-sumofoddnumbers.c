/*Day 16, calculate the value of 1+3+5+...+99*/
#include <stdio.h>

int main(){
	int i=1,sum=1;
	start:
		printf("%d",i);
		i=i+2;
		if(i<100){
			sum+=i;
			printf("+");
			goto start;
		}
	printf("=%d\n",sum);
	return 0;
}