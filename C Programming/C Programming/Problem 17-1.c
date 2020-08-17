#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void MaxAndMin(int* arr, int size, int** mxPtr, int** mnPtr)
{
	int* Max, * Min;

	Max = Min = &arr[0];
	for (int i = 0; i < size; i++)
	{
		if (*Max < arr[i])
		{
			Max = &arr[i];
		}
		else
		{
			Min = &arr[i];
		}
	}
	*mxPtr = Max;
	*mnPtr = Min;
}

int main(void)
{
	int* MaxPtr;
	int* MinPtr;
	int Arr[5];

	for (int i = 0; i < 5; i++)
	{
		printf("���� �Է� %d : ", i + 1);
		scanf("%d", &Arr[i]);
	}

	MaxAndMin(Arr, sizeof(Arr) / sizeof(int), &MaxPtr, &MinPtr);
	printf("�ִ� : %d, �ּ� : %d \n", *MaxPtr, *MinPtr);
	return 0;
}