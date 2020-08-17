#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// Problem 1
	int total = 0, num = 0, i = 0;

	while (i < 5)
	{
		while (num <= 0)
		{
			printf("0보다 큰 수를 입력하세요(%d번째) : ", i + 1);
			scanf("%d", &num);
		}
		total += num;
		num = 0;
		i++;
	}
	printf("총 합은 : %d입니다. \n", total);
	printf("\n");

	// Problem 2
	int x = 0, y = 0;
	while ( x < 5 )
	{
		while ( y < x )
		{
			printf(" O ");
			y++;
		}

		y = 0;
		printf(" * \n");
		x++;
	}
	return 0;
}