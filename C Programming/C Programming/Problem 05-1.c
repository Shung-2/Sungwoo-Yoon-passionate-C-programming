#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{

	// Problem 1
	int xpos1, ypos1;
	int xpos2, ypos2;
	int result;

	printf("좌 상단의 x, y 좌표를 입력하세요 : ");
	scanf("%d %d", &xpos1, &ypos1);
	printf("우 하단의 x, y 좌표를 입력하세요 : ");
	scanf("%d %d", &xpos2, &ypos2);
	
	result = (xpos2 - xpos1) * (ypos2 - ypos1);
	printf("두 점이 이루는 직사각형의 넓이는 %d입니다. \n", result);

	// Problem 2
	double num1, num2;
	printf("두 개의 실수를 입력하세요 : ");
	scanf("%lf %lf", &num1, &num2);

	printf("두 개의 실수의 합은 %f입니다. \n", num1 + num2);
	printf("두 개의 실수의 차은 %f입니다. \n", num1 - num2);
	printf("두 개의 실수의 곱은 %f입니다. \n", num1 * num2);
	printf("두 개의 실수의 나눈 값은 %f입니다. \n", num1 / num2);
	
	// Problem 3
	// 수기 풀이 문제로 인해 코드 없음

	// Problem 4
	int num3;
	printf("아스키 코드로 출력하기 위한 정수를 입력하세요 : ");
	scanf("%d", &num3);
	printf("아스키 코드 값은 %c입니다. \n", num3);

	// Problem 5
	char ch;
	printf("정수로 출력하기 위한 아스키 코드를 입력하세요 : ");
	scanf("%c", &ch);
	printf("정수의 값은 %d입니다. \n", ch);
	return 0;
}