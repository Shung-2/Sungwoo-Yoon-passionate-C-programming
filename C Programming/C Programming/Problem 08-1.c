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
			printf("7 �Ǵ� 9�� ����� ������ �����ϴ�. : %d \n", num);
		}
	}

	// Problem 2
	int num2, num3;
	printf("�� ���� ������ �Է��ϼ��� : ");
	scanf("%d %d", &num2, &num3);

	if (num2 > num3)
	{
		printf("�� ���� ���� : %d�Դϴ�. \n", num2 - num3);
	}
	else
	{
		printf("�� ���� ���� : %d�Դϴ�. \n", num3 - num2);
	}

	// Problem 3
	int kor, eng, math, Average;
	printf("����, ����, ���� ������ �Է��ϼ��� : ");
	scanf("%d %d %d", &kor, &eng, &math);

	Average = (kor + eng + math) / 3;
	
	if (Average >= 90)
	{
		printf("A�Դϴ�. \n");
	}
	else if (Average >= 80)
	{
		printf("B�Դϴ�. \n");
	}
	else if (Average >= 70)
	{
		printf("C�Դϴ�. \n");
	}
	else
	{
		printf("F�Դϴ�. \n");
	}

	// Problem 4
	int num4, num5;
	int result;
	printf("�� ���� ������ �Է��ϼ��� : ");
	scanf("%d %d", &num4, &num5);

	result = (num4 > num5) ? (num4-num5) : (num5-num4);
	printf("�� ���� ���� : %d�Դϴ�. \n", result);
}