/*Day 18, at which x will the sum of 1~x exceeds 10000*/
#include <stdio.h>

int main(){
	int i=1,sum=0;
	while(sum<=10000){
		sum+=i;
		printf("The sum of 1 to %3d is %5d\n",i,sum);
		i++;
	}
	printf("When x=%d, the sum of 1~x will exceed 10000.\n",i-1);
	/*When sum exceeds 10000, the i++ be executed again, so we need to minus 1*/
	return 0;
}