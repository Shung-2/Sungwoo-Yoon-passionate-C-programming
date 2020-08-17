#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// Problem 1

int SquareByValue(int num)
{
	return num * num;
}

int SquareByReference(int * ptr)
{
	int num = *ptr;
	*ptr = num * num;
}

int Swap(int* ptr1, int* ptr2, int * ptr3)
{
	int temp = *ptr3;
	*ptr3 = *ptr2;
	*ptr2 = *ptr1;
	*ptr1 = temp;
}

int main(void)
{
	// Problem 1
	int num;
	printf("제곱을 할 정수를 입력하세요 : ");
	scanf("%d", &num);
	printf("%d \n", SquareByValue(num));
	printf("%d \n", SquareByReference(&num));
	int num1 = 10, num2 = 20, num3 = 30;
	Swap(&num1, &num2, &num3);
	printf("%d %d %d \n", num1, num2, num3);
	return 0;
}