#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// Problem 1
	int i = 0;
	int num1;
	printf("Hello World�� �ݺ� ����� ���� �Է��ϼ��� : ");
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
	printf("3�� ����� �ݺ� ����� ���� �Է��ϼ��� : ");
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
		printf("����ؼ� ���� ������ �Է��ϼ���(0 �Է� �� ����) : ");
		scanf("%d", &num3);
		total += num3;
	}
	printf("�Էµ� ������ ���� %d�Դϴ�. \n", total);
	printf("\n");

	// Problem 4
	int dan = 9;
	int num4;

	printf("�������� ����� ���ϴ� �������� �Է��ϼ��� : ");
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

	printf("�Է��� ������ ������ �Է��ϼ��� : ");
	scanf("%d", &num5);
	
	while (i++ < num5)
	{
		printf("������ �Է��ϼ��� : ");
		scanf("%d", &input);
		total += input;
	}
	printf("�Է��� ��� ���� : %f�Դϴ�. \n", (double)total / num5);
	return 0;
}