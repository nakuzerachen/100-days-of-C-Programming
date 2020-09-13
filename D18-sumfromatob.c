/*Day 18, sum from integer a to be(e.g., 3+4+5+..+101+102*/
#include <stdio.h>

int main(){
	int stt,a,b,sum=0;
	printf("Which number do you want to start adding?\n");
	scanf("%d",&stt);
	a=stt;
	printf("Which number should we end the adding?\n");
	scanf("%d",&b);
	for(a;a<=b;a++)
		sum+=a;
	printf("%d+%d+%d+...+%d+%d=%d\n",stt,stt+1,stt+2,b-1,b,sum);
	return 0;
}