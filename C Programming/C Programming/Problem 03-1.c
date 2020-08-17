#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// Problem 1
	int num1, num2;

	printf("첫번째 정수를 입력해주세요 : ");
	scanf("%d", &num1);
	printf("두번째 정수를 입력해주세요 : ");
	scanf("%d", &num2);

	printf("첫번째 정수에서 두번째 정수를 뺀 값은 %d입니다. \n", num1 - num2);
	printf("첫번째 정수에서 두번째 정수를 곱한 값은 %d입니다. \n\n", num1 * num2);

	// Problem 2
	int num3, num4, num5;

	printf("첫번째 정수를 입력해주세요 : ");
	scanf("%d", &num3);
	printf("두번째 정수를 입력해주세요 : ");
	scanf("%d", &num4);
	printf("세번째 정수를 입력해주세요 : ");
	scanf("%d", &num5);

	printf("첫번째 정수와 두번째 정수의 곱과 세번쩨 정수의 합의 값은 %d입니다. \n\n", num1 * num2 + num3);

	// Problem 3
	int num6;

	printf("제곱의 결과값을 찾을 정수를 입력하세요 : ");
	scanf("%d", &num6);

	printf("정수의 값은 %d입니다. \n\n", num6 * num6);

	// Problem 4
	int num7, num8;

	printf("첫번째 정수를 입력해주세요 : ");
	scanf("%d", &num7);
	printf("두번째 정수를 입력해주세요 : ");
	scanf("%d", &num8);

	printf("첫번째 정수에서 두번째 정수를 나눈 몫은 %d이며 나머지는 %d입니다. \n\n", num7 / num8, num7 % num8);

	// Problem 5
	int num9, num10, num11;

	printf("첫번째 정수를 입력해주세요 : ");
	scanf("%d", &num9);
	printf("두번째 정수를 입력해주세요 : ");
	scanf("%d", &num10);
	printf("세번째 정수를 입력해주세요 : ");
	scanf("%d", &num11);

	printf("연산의 결과 값은 %d입니다. \n\n", 
		(num9-num10) * (num10+num11) * (num11%num9));

	return 0;
}