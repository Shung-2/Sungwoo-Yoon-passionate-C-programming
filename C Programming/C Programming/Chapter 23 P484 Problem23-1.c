#include <stdio.h>

typedef struct point
{
	int xpos, ypos;
} Point;

Point SwapPoint(Point * ptr1, Point * ptr2)
{
	Point Temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = Temp;
}

int main(void)
{
	Point pos1 = { 2, 4 };
	Point pos2 = { 5, 7 };
	
	SwapPoint(&pos1, &pos2);
	printf("Pos 1 : [%d, %d] \n", pos1.xpos, pos1.ypos);
	printf("Pos 2 : [%d, %d] \n", pos2.xpos, pos2.ypos);
}