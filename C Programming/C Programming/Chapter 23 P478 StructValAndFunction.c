#include <stdio.h>

typedef struct point {
	int xpos, ypos;
} Point;

void ShowPosition(Point pos)
{
	printf("[%d, %d] \n", pos.xpos, pos.ypos);
}

Point GetCurrentPosition(void)
{
	Point cen;
	printf("Input current pos: ");
	scanf("%d %d", &cen.xpos, &cen.ypos);
	return cen;
}

int main(void)
{
	Point curpos = GetCurrentPosition();
	ShowPosition(curpos);
	return 0;
}