/*Day 17, how many change do we have*/
#include <stdio.h>

int main(){
	int sum,pay,ret;
	printf("How much is the total price?\n");
	scanf("%d",&sum);
	printf("How much did you pay?\n");
	scanf("%d",&pay);
	if(pay>=sum){
		ret=pay-sum;
		int a1000,a500,a100,a50,a10,a5,a1;
		a1000=ret/1000;
		a500=(ret%1000)/500;
		a100=(ret%500)/100;
		a50=(ret%100)/50;
		a10=(ret%50)/10;
		a5=(ret%10)/5;
		a1=(ret%5);
		printf("1000 dollars: %d\n",a1000);
		printf(" 500 dollars: %d\n",a500);
		printf(" 100 dollars: %d\n",a100);
		printf("  50 dollars: %d\n",a50);
		printf("  10 dollars: %d\n",a10);
		printf("   5 dollars: %d\n",a5);
		printf("   1 dollar : %d\n",a1);
		printf("Total return change: %d\n",ret);
		}
	else
		printf("It was not enough.\n");
	return 0;	
}