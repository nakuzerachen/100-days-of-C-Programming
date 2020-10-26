/*Day 61 - HackerRank:Height and Volume*/
#include <stdio.h>
#include <stdlib.h>

struct box
{
	int length;
    int width;
    int height;
};

typedef struct box box;

int get_volume(box b) 
{
	return (b.length)*(b.width)*(b.height);
}

int is_lower_than_max_height(box b) 
{
	if(b.height<41)
        return 1;
    else
        return 0;
}


int main()
{
    struct box A={5,5,5};
    printf("V=%d\n",get_volume(A));
    system("pause");
    return 0;
}
