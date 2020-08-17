#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// Problem 1
	int i = 0;
	int num1;
	printf("Hello World를 반복 출력할 수를 입력하세요 : ");
	scanf("%d", &num1);

	while (num1 > i)
	{
		printf("Hello World! \n");
		i++;
	}
	printf("\n");

	// Problem 2
	int i2 = 0;
	int num2;
	printf("3의 배수를 반복 출력할 수를 입력하세요 : ");
	scanf("%d", &num2);

	while (num2 > i2)
	{
		i2++;
		printf("%d", 3 * i2);
	}
	printf("\n\n");

	// Problem 3
	int total = 0;
	int num3 = 1;

	while (num3 != 0)
	{
		printf("계속해서 더할 정수를 입력하세요(0 입력 시 종료) : ");
		scanf("%d", &num3);
		total += num3;
	}
	printf("입력된 정수의 합은 %d입니다. \n", total);
	printf("\n");

	// Problem 4
	int dan = 9;
	int num4;

	printf("역순으로 출력을 원하는 구구단을 입력하세요 : ");
	scanf("%d", &num4);

	while (dan > 0)
	{
		printf("%d * %d = %d \n", num4, dan, num4 * dan);
		dan--;
	}
	printf("\n");
	
	// Problem 5
	int total = 0, i = 0;
	int num5, input;

	printf("입력할 정수의 개수를 입력하세요 : ");
	scanf("%d", &num5);
	
	while (i++ < num5)
	{
		printf("정수를 입력하세요 : ");
		scanf("%d", &input);
		total += input;
	}
	printf("입력의 평균 값은 : %f입니다. \n", (double)total / num5);
	return 0;
}