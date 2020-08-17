#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void DoublePointerAccess()
{
	double num = 3.14;
	double* ptr = &num;
	double** dptr = &ptr;
	double* ptr2;

	printf("%9p %9p \n", ptr, *dptr);
	printf("%9g %9g \n", num, **dptr);

	ptr2 = *dptr;
	*ptr2 = 10.00;
	printf("%9g %9g \n", num, **dptr);
	return 0;
}

void SwapIntPtr(int* p1, int* p2)
{
	int* temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

void PointerSwapMain()
{
	int num1 = 10, num2 = 20;
	int* ptr1, * ptr2;
	ptr1 = &num1, ptr2 = &num2;

	printf("*ptr1, *ptr2 : %d %d \n", *ptr1, *ptr2);
	SwapIntPtr(ptr1, ptr2);
	printf("*ptr1, *ptr2 : %d %d \n", *ptr1, *ptr2);
	return 0;
}

void PointerArrayType()
{
	int num1 = 10, num2 = 20, num3 = 30;
	int* ptr1 = &num1;
	int* ptr2 = &num2;
	int* ptr3 = &num3;

	int* ptrArr[] = { ptr1, ptr2, ptr3 };
	int** dptr = ptrArr;

	printf("%d %d %d \n", *(ptrArr[0]), *(ptrArr[1]), *(ptrArr[2]));
	printf("%d %d %d \n", *(dptr[0]), *(dptr[1]), *(dptr[2]));
	return 0;
}

void TriplePointer()
{
	int num = 100;
	int* ptr = &num;
	int** dptr = &ptr;
	int*** tptr = &dptr;

	printf("%d %d \n", **dptr, ***tptr);
}

int main(void)
{
	//DoublePointerAccess();
	//PointerSwapMain();
	//PointerArrayType();
	TriplePointer();
}