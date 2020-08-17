#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// Problem 1
	int Arr1[5];
	int Max, Min, Total;

	for (int i = 0; i < 5; i++)
	{
		printf("5개의 정수를 입력하세요. : ");
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
	printf("최대값은 : %d입니다. \n", Max);
	printf("최소값은 : %d입니다. \n", Min);
	printf("총 핪은 : %d입니다. \n", Total);

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