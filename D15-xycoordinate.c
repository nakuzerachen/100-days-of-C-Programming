/*Day 15, x-y coordinate and quadrants*/
#include <stdio.h>

int main(){
	float x,y;
	printf("Give me the coordinate of any point P.\n");
	scanf("(%f,%f)",&x,&y);
	if(x>0)
		if(y>0)
			printf("P is on the 1st quadrant.＼n");
		else if(y<0)
			printf("P is on the 4th quadrant.\n");
		else
			printf("P is on the x coordinate.\n");
	else if(x<0)
		if(y>0)
			printf("P is on the 2nd quadrant.\n");
		else if(y<0)
			printf("P is on the 3rd quadrant.\n");
		else
			printf("P is on the x coordinate.\n");
	else
		if(y!=0)
			printf("P is on the y coordinate.\n");
		else
			printf("P is the origin.\n");
	return 0;
}