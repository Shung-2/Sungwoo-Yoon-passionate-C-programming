#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// Problem 1
int Maximum (int num1, int num2, int num3)
{
	if (num1 > num2)
	{
		return (num1 > num2) ? (num1) : (num3);
	}
	else
	{
		return (num2 > num3) ? (num2) : (num3);
	}
}

int Minimum(int num1, int num2, int num3)
{
	if (num1 < num2)
	{
		return (num1 < num3) ? (num1) : (num3);
	}
	else
	{
		return (num2 < num3) ? (num2) : (num3);
	}
}

 // Problem 2
double CeltoFah(double C) // 섭씨를 화씨로
{
	return 1.8 * C + 32;
}

double FahToCel(double F) // 화씨를 섭씨로
{
	return (F - 32) / 1.8;
}

 // Problem 3
void ShowFibonachi(int num5)
{
	int f1 = 0, f2 = 1, f3, i;
	
	if (num5 == 0)
	{
		printf("%d ", f1);
	}
	else
	{
		printf("%d %d ", f1, f2);
	}

	for (i = 0; i < num5 - 2; i++)
	{
		f3 = f1 + f2;
		printf("%d ", f3);
		f1 = f2;
		f2 = f3;
	}
}
int main (void)
{
	// Problem 1
	int n1, n2, n3;

	printf("세 개의 정수 입력 : ");
	scanf("%d %d %d", &n1, &n2, &n3);
	printf("가장 큰 수는 : %d입니다. \n", Maximum(n1, n2, n3));
	printf("가장 작은 수는 : %d입니다. \n", Minimum(n1, n2, n3));

	// Problem 2
	int sel; 
	double num4;

	printf("1. 섭씨를 화씨로 \n2. 화씨를 섭씨로 \n");
	scanf("%d", &sel);

	if (sel == 1)
	{
		printf("섭씨 입력 : ");
		scanf("%lf", &num4);
		printf("변경된 화씨 온도 : %f \n", CeltoFah(num4));
	}
	else if (sel == 2)
	{
		printf("화씨 입력 : ");
		scanf("%lf", &num4);
		printf("변경된 섭씨 온도 : %f \n", FahToCel(num4));
	}
	else
	{
		printf("잘못된 선택입니다.");
	}

	// Problem 3
	int x;
	printf("출력하고자 하는 피보나치 수열의 개수를 입력하세요 : ");
	scanf("%d", &x);
	
	if (x < 1)
	{
		printf("1 이상의 값을 입력하세요. \n");
		return -1;
	}
	ShowFibonachi(x);
	return 0;
}