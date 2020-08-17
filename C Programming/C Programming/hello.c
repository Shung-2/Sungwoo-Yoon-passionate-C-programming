#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i;
	int a[5] = { 1,2,3,4,5 };
	int length = sizeof(a) / sizeof(a[0]);

	printf("%d", length);
	printf("\n %d", sizeof(a[0]));
	printf("\n %d", sizeof(a));
	//printf("hello world! \n");
	//return;
}