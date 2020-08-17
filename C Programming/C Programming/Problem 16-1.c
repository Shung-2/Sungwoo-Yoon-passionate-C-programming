#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int record[5][5];

void Problem1()
{
	int arr[3][9];

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			arr[i][j] = (i + 2) * (j + 1);
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			printf("%4d", arr[i][j]);
		}
		printf("\n");
	}
}

void Problem2()
{
	int arr[2][4] = {
	{ 1, 2, 3, 4 },
	{ 5, 6, 7, 8 }
	};

	int arr2[4][2];

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			arr2[j][i] = arr[i][j];
		}
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			printf("%2d", arr2[i][j]);
		}
		printf("\n");
	}
}

void WriteRecord()
{
	int sum;
	int i, j;

	for (i = 0; i < 4; i++)
	{
		sum = 0;
		printf("%d번째 학생의 성적 입력 \n", i + 1);
		for (j = 0; j < 4; j++)
		{
			printf("과목 %d: ", j + 1);
			scanf("%d", &record[i][j]);
			sum += record[i][j];
		}
		record[i][j] = sum;
	}
}

void WriteSumRecord()
{
	int sum = 0;
	int i, j;

	for (i = 0; i < 4; i++)
	{
		sum = 0;
		for (j = 0; j < 4; j++)
		{
			sum += record[j][i];
		}
		record[4][i] = sum;
		record[4][4] += sum;
	}
}

void ShowAllRecord()
{
	int i, j;

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%3d ", record[i][j]);
		}
		printf("\n");
	}

}

int main(void)
{
	//Problem1();
	//Problem2();
	WriteRecord();
	WriteSumRecord();
	ShowAllRecord();
	return 0;
}