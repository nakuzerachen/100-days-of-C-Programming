/*Day 13, use goto to make loops(not recommended)*/
#include <stdio.h>

int main(){
	int i=0,sum=0;
	start:
		i++; /*i increases by 1*/
		sum+=i; /*sum=sum+i, so sum will become 1+2+3+...+10*/
		printf("%d",i);
		if(i<10){
			printf("+");/*print out the '+' sign*/
			goto start; /*go back to the start label(line 6)*/
		}
		printf("=%d\n",sum);/*print the value of sum*/
	return 0;
}