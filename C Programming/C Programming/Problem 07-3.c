#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// Problem 1 - 1
	int total = 0;
	int num1 = 1;

	while (num1 != 0)
	{
		printf("정수 입력(0 to Quit) : ");
		scanf("%d", &num1);
		total += num1;
	}
	printf("합계 : %d \n", total);

	// Problem 1 - 2
	int total2 = 0;
	int num2 = 0;

	printf("정수 입력(0 to Quit) : ");
	scanf("%d", &num2);
	total2 += num2;

	while (num2 != 0)
	{
		printf("정수 입력(0 to Quit) : ");
		scanf("%d", &num2);
		total2 += num2;
	}
	printf("합계 : %d \n", total2);

	// Problem 2
	int total3 = 0, num3 = 0;

	do
	{
		total3 += num3;
		num3 = num3 + 2;
	} while (num3 <= 100);
	printf("합계 : %d", total3);

	// Problem 3
	int cur = 2;
	int is = 0;

	do
	{
		is = 1;
		while (is < 10)
		{
			printf("%d * %d = %d \n", cur, is, cur * is);
			is++;
		}
		cur++;
	} while (cur < 10);
	return 0;
}