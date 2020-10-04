#include <stdio.h>

typedef struct point
{
	int xpos, ypos;
} Point;

typedef struct rectangle
{
	Point ul, lr;
} Rectangle;

void ShowRecArea(Rectangle rec)
{
	printf("³ÐÀÌ : %d \n", (rec.lr.xpos - rec.ul.xpos) * (rec.lr.ypos - rec.ul.ypos));
}

void ShowrecPos(Rectangle rec)
{
	printf("ÁÂ »ó´Ü : [%d %d] \n", rec.ul.xpos, rec.ul.ypos);
	printf("ÁÂ ÇÏ´Ü : [%d %d] \n", rec.ul.xpos, rec.lr.ypos);
	printf("¿ì »ó´Ü : [%d %d] \n", rec.lr.xpos, rec.ul.ypos);
	printf("¿ì ÇÏ´Ü : [%d %d] \n", rec.lr.xpos, rec.lr.ypos);
}

int main (void)
{
	Rectangle rec1 = { {1, 1}, {4, 4} };
	Rectangle rec2 = { {0, 0}, {7, 5} };
	ShowRecArea(rec1);
	ShowrecPos(rec1);
	ShowRecArea(rec2);
	ShowrecPos(rec2);
}