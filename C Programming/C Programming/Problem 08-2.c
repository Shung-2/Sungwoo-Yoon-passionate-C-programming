#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// Problem 1
	int i, j;

	for (i = 1; i < 10; i++)
	{
		if (i % 2 != 0)
		{
			continue;
		}

		for (j = 1; j < 10; j++)
		{
			if (i < j)
				break;
			printf("%d * %d = %d \n", i, j, i * j);
		}
		printf("\n");
	}

	// Problem 2
	int A, Z;
	int result;

	for (A = 0; A < 10; A++)
	{
		for (Z = 0; Z < 10; Z++)
		{
			if (A == Z)
				continue;
			result = (A * 10 + Z) + (Z * 10 + A);
			if (result == 99)
			{
				printf("%d%d+%d%d=%d \n", A, Z, Z, A, result);
			}

		}
	}
}