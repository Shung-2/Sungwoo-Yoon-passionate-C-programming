#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// Problem 1
	int num1;
	printf("��ȣ�� �ٲ� ������ �Է��ϼ��� : ");
	scanf("%d", &num1);
	num1 = ~num1;
	num1 = num1 + 1;
	printf("��ȣ�� �ٲ� ������ ��� ���� %d�Դϴ�. \n\n", num1);

	// Problem 2
	int num2 = 3;
	num2 = num2 << 3;
	num2 = num2 >> 2;
	printf("%d \n", num2);

	return 0;
}