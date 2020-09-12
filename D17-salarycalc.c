/*Day 17, calculate the salary*/
#include <stdio.h>

int main(){
	int hr;
	float sal;
	printf("How many hours do you work in a month?\n");
	scanf("%d",&hr);
	if(hr<=60){
		sal=200*hr;
		printf("Your salary is %.2f.\n",sal);
	}
	else if((hr>=61)&&(hr<=75)){
		sal=200*60+200*1.25*(hr-60);
		printf("Your salary is %.2f.\n",sal);
	}
	else{
		sal=200*(60+1.25*15)+200*1.75*(hr-75);
		printf("Your salary is %.2f.\n",sal);
	}
	return 0;
}