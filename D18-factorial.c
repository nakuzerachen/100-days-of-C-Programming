/*Day 18, calculate n!, (for positive integer n)*/
#include <stdio.h>

int main(){
	int n,i=1;
	long int fac=1;
	do{
		printf("Give the n in n!\n");
		scanf("%d",&n);
	}	while(n<0);

	do{
		fac*=i++;
	}	while(i<=n);/*n=0,0!=1*/
	printf("%d!=%ld\n",n,fac);
	return 0;
}