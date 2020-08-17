#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// Problem 1
	int num;

	for (num = 1; num < 100; num++)
	{
		if (num % 7 == 0 || num % 9 == 0)
		{
			printf("7 또는 9의 배수는 다음과 같습니다. : %d \n", num);
		}
	}

	// Problem 2
	int num2, num3;
	printf("두 개의 정수를 입력하세요 : ");
	scanf("%d %d", &num2, &num3);

	if (num2 > num3)
	{
		printf("두 수의 차는 : %d입니다. \n", num2 - num3);
	}
	else
	{
		printf("두 수의 차는 : %d입니다. \n", num3 - num2);
	}

	// Problem 3
	int kor, eng, math, Average;
	printf("국어, 영어, 수학 점수를 입력하세요 : ");
	scanf("%d %d %d", &kor, &eng, &math);

	Average = (kor + eng + math) / 3;
	
	if (Average >= 90)
	{
		printf("A입니다. \n");
	}
	else if (Average >= 80)
	{
		printf("B입니다. \n");
	}
	else if (Average >= 70)
	{
		printf("C입니다. \n");
	}
	else
	{
		printf("F입니다. \n");
	}

	// Problem 4
	int num4, num5;
	int result;
	printf("두 개의 정수를 입력하세요 : ");
	scanf("%d %d", &num4, &num5);

	result = (num4 > num5) ? (num4-num5) : (num5-num4);
	printf("두 수의 차는 : %d입니다. \n", result);
}