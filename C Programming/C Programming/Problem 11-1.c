#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// Problem 1
	int Arr1[5];
	int Max, Min, Total;

	for (int i = 0; i < 5; i++)
	{
		printf("5���� ������ �Է��ϼ���. : ");
		scanf("%d", &Arr1[i]);
	}
	
	Max = Min = Total = Arr1[0];
	for (int i = 0; i < 5; i++)
	{
		Total += Arr1[i];
		if (Max < Arr1[i])
		{
			Max = Arr1[i];
		}
		if (Max > Arr1[i])
		{
			Min = Arr1[i];
		}
	}
	printf("�ִ밪�� : %d�Դϴ�. \n", Max);
	printf("�ּҰ��� : %d�Դϴ�. \n", Min);
	printf("�� �D�� : %d�Դϴ�. \n", Total);

	// Problem 2

	char Arr2[] = { 'G', 'O', 'O', 'D', ' ', 'T', 'I', 'M', 'E' };
	int arrLen = sizeof(Arr2) / sizeof(char);
	int i;

	for (int i = 0; i < arrLen; i++)
	{
		printf("%c", Arr2[i]);
	}
	printf("\n");
	return 0;
}