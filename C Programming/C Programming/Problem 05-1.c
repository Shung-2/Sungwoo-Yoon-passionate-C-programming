#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{

	// Problem 1
	int xpos1, ypos1;
	int xpos2, ypos2;
	int result;

	printf("�� ����� x, y ��ǥ�� �Է��ϼ��� : ");
	scanf("%d %d", &xpos1, &ypos1);
	printf("�� �ϴ��� x, y ��ǥ�� �Է��ϼ��� : ");
	scanf("%d %d", &xpos2, &ypos2);
	
	result = (xpos2 - xpos1) * (ypos2 - ypos1);
	printf("�� ���� �̷�� ���簢���� ���̴� %d�Դϴ�. \n", result);

	// Problem 2
	double num1, num2;
	printf("�� ���� �Ǽ��� �Է��ϼ��� : ");
	scanf("%lf %lf", &num1, &num2);

	printf("�� ���� �Ǽ��� ���� %f�Դϴ�. \n", num1 + num2);
	printf("�� ���� �Ǽ��� ���� %f�Դϴ�. \n", num1 - num2);
	printf("�� ���� �Ǽ��� ���� %f�Դϴ�. \n", num1 * num2);
	printf("�� ���� �Ǽ��� ���� ���� %f�Դϴ�. \n", num1 / num2);
	
	// Problem 3
	// ���� Ǯ�� ������ ���� �ڵ� ����

	// Problem 4
	int num3;
	printf("�ƽ�Ű �ڵ�� ����ϱ� ���� ������ �Է��ϼ��� : ");
	scanf("%d", &num3);
	printf("�ƽ�Ű �ڵ� ���� %c�Դϴ�. \n", num3);

	// Problem 5
	char ch;
	printf("������ ����ϱ� ���� �ƽ�Ű �ڵ带 �Է��ϼ��� : ");
	scanf("%c", &ch);
	printf("������ ���� %d�Դϴ�. \n", ch);
	return 0;
}