#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// Problem 1
	int num1, num2;

	printf("ù��° ������ �Է����ּ��� : ");
	scanf("%d", &num1);
	printf("�ι�° ������ �Է����ּ��� : ");
	scanf("%d", &num2);

	printf("ù��° �������� �ι�° ������ �� ���� %d�Դϴ�. \n", num1 - num2);
	printf("ù��° �������� �ι�° ������ ���� ���� %d�Դϴ�. \n\n", num1 * num2);

	// Problem 2
	int num3, num4, num5;

	printf("ù��° ������ �Է����ּ��� : ");
	scanf("%d", &num3);
	printf("�ι�° ������ �Է����ּ��� : ");
	scanf("%d", &num4);
	printf("����° ������ �Է����ּ��� : ");
	scanf("%d", &num5);

	printf("ù��° ������ �ι�° ������ ���� ������ ������ ���� ���� %d�Դϴ�. \n\n", num1 * num2 + num3);

	// Problem 3
	int num6;

	printf("������ ������� ã�� ������ �Է��ϼ��� : ");
	scanf("%d", &num6);

	printf("������ ���� %d�Դϴ�. \n\n", num6 * num6);

	// Problem 4
	int num7, num8;

	printf("ù��° ������ �Է����ּ��� : ");
	scanf("%d", &num7);
	printf("�ι�° ������ �Է����ּ��� : ");
	scanf("%d", &num8);

	printf("ù��° �������� �ι�° ������ ���� ���� %d�̸� �������� %d�Դϴ�. \n\n", num7 / num8, num7 % num8);

	// Problem 5
	int num9, num10, num11;

	printf("ù��° ������ �Է����ּ��� : ");
	scanf("%d", &num9);
	printf("�ι�° ������ �Է����ּ��� : ");
	scanf("%d", &num10);
	printf("����° ������ �Է����ּ��� : ");
	scanf("%d", &num11);

	printf("������ ��� ���� %d�Դϴ�. \n\n", 
		(num9-num10) * (num10+num11) * (num11%num9));

	return 0;
}