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
		printf("정수 입력 %d : ", i + 1);
		scanf("%d", &Arr[i]);
	}

	MaxAndMin(Arr, sizeof(Arr) / sizeof(int), &MaxPtr, &MinPtr);
	printf("최대 : %d, 최소 : %d \n", *MaxPtr, *MinPtr);
	return 0;
}