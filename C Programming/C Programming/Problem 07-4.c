#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// Problem 1
	int start, end;
	int result;

	printf("���� ���� �� ���� �Է����ּ��� : ");
	scanf("%d %d", &start, &end);

	for ( result = 0; start <= end; start++ )
	{
		result += start;
	}
	printf("�հ� : %d \n", result);

	// Problem 2
	int num, i;
	int total = 1;

	printf("���丮���� ����� ������ �Է��ϼ��� : ");
	scanf("%d", &num);

	for (i = 1; i <= num; i++)
	{
		total = total * i;
	}
	printf("%d! = %d", num, total);
	return 0;
}