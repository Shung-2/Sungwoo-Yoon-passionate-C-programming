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
double CeltoFah(double C) // ������ ȭ����
{
	return 1.8 * C + 32;
}

double FahToCel(double F) // ȭ���� ������
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

	printf("�� ���� ���� �Է� : ");
	scanf("%d %d %d", &n1, &n2, &n3);
	printf("���� ū ���� : %d�Դϴ�. \n", Maximum(n1, n2, n3));
	printf("���� ���� ���� : %d�Դϴ�. \n", Minimum(n1, n2, n3));

	// Problem 2
	int sel; 
	double num4;

	printf("1. ������ ȭ���� \n2. ȭ���� ������ \n");
	scanf("%d", &sel);

	if (sel == 1)
	{
		printf("���� �Է� : ");
		scanf("%lf", &num4);
		printf("����� ȭ�� �µ� : %f \n", CeltoFah(num4));
	}
	else if (sel == 2)
	{
		printf("ȭ�� �Է� : ");
		scanf("%lf", &num4);
		printf("����� ���� �µ� : %f \n", FahToCel(num4));
	}
	else
	{
		printf("�߸��� �����Դϴ�.");
	}

	// Problem 3
	int x;
	printf("����ϰ��� �ϴ� �Ǻ���ġ ������ ������ �Է��ϼ��� : ");
	scanf("%d", &x);
	
	if (x < 1)
	{
		printf("1 �̻��� ���� �Է��ϼ���. \n");
		return -1;
	}
	ShowFibonachi(x);
	return 0;
}