#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num1 = 10;
	int num2 = 20;

	int* ptr1;
	int* ptr2;

	ptr1 = &num1;
	ptr2 = &num2;

	(*ptr1) += 10;
	(*ptr2) -= -10;

	ptr1 = &num2;
	ptr2 = &num1;

	printf("num1 : %d \n", num1);
	printf("num2 : %d \n", num2);
	return 0;
}