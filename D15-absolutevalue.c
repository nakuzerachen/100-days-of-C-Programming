/*Day 15, the absolute value of an integer*/
#include <stdio.h>

int main(){
	int x,abs;
	printf("Give me an integer.\n");
	scanf("%d",&x);
	if(x>=0){
		abs=x;
		printf("|x| = %d\n",abs);
	}
	else{
		abs=-x;
		printf("|x| = %d\n",abs);
	}
	return 0;
}