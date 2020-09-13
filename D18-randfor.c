/*Day 18, using rand() to "roll a dice"*/
/*then estimate how many times do we have a particular point*/
#include <stdio.h>
#include <stdlib.h>

int main(){
	int i,count=0;
	for(i=1;i<=10000;i++){
		if(((rand()%6)+1)==6)/*The range of the value is 1~6.*/
			count++;/*Count incrases 1 whenever we got 6.*/
	}
	printf("We got %d times of 6 points in 10000 attempts.\n",count);
	return 0;
}