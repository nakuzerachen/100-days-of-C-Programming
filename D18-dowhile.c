/*Day 18, do while statement -- add from 1~x*/
#include <stdio.h>

int main(){
	int x,i=1,sum=0;
	do{
		printf("Give me the x value.\n");
		scanf("%d",&x);
	} while (x<=0);

	do{
		sum+=i++;/*First do sum=sum+i, then do i++*/
	} while (i<=x);
	printf("1+2+3+...+%d+%d=%d\n",x-1,x,sum);
	return 0;
}