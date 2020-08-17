#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// Problem 1
	int num1;
	printf("부호를 바꿀 정수를 입력하세요 : ");
	scanf("%d", &num1);
	num1 = ~num1;
	num1 = num1 + 1;
	printf("부호를 바꾼 정수의 결과 값은 %d입니다. \n\n", num1);

	// Problem 2
	int num2 = 3;
	num2 = num2 << 3;
	num2 = num2 >> 2;
	printf("%d \n", num2);

	return 0;
}