/*Day 18, using for to calculate 1+2+3+...+99+100.*/
#include <stdio.h>

int main(){
	int i,sum=0;
	for(i=1;i<=100;i++){
		sum+=i;
	}
	printf("1+2+3+...+99+100=%d\n",sum);
	return 0;
}