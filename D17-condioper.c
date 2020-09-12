/*Day 17, practice using ?: statement*/
#include <stdio.h>

int main(){
	int height,weight;
	printf("How tall are you? Input in cm.\n");
	scanf("%d",&height);
	printf("How heavy are you? Input in kg.\n");
	scanf("%d",&weight);
	(weight>90)&&(height<180) ? printf("You're overweight.\n") : printf("You're not overweight.\n");
	return 0;
}