#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void TwoDimArraySize()
{
	int arr1[3][4];
	int arr2[7][9];
	printf("세로 3, 가로 4 : %d \n", sizeof(arr1));
	printf("세로 7, 가로 9 : %d \n", sizeof(arr1));
	return 0;
}

void PopuResarch()
{
	int villa[4][2];
	int popu;

	/* 가구별 거주인원 입력 받기 */
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			printf("%d층 %d호 인구수 : ", i + 1, j + 1);
			scanf("%d", &villa[i][j]);
		}
	}
	/* 빌라의 층별 인구수 출력하기 */
	for (int i = 0; i < 4; i++)
	{
		popu = 0;
		popu += villa[i][0];
		popu += villa[i][1];
		printf("%d층 인구수 : %d \n", i + 1, popu);
	}
	return 0;
}

void PopuResarch2()
{
	int villa[8];
	int popu;

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			printf("%d층 %d호 인구수 : ", i + 1, j + 1);
			scanf("%d", &villa[i]);
		}
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			popu = 0;
			popu += villa[i];
			popu += villa[i];
		}
		printf("%d층 인구수 : %d \n", i + 1, popu);
	}
	return 0;
}

void TwoDimArrayAddr()
{
	int arr[3][2];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			printf("%p \n", &arr[i][j]);
		}
	}
	return 0;
}

void TwoDimArrayInit()
{
	int i, j;

	/* 2차원 배열 초기화의 예 1 */
	int arr[3][3] = {
	{ 1, 2, 3 },
	{ 4, 5, 6 },
	{ 7, 8, 9 }
	};

	/* 2차원 배열 초기화의 예 2 */
	int arr2[3][3] = {
		{1},
		{4, 5},
		{7, 8, 9}
	};

	/* 2차원 배열 초기화의 예 3 */
	int arr3[3][3] = { 1, 2, 3, 4, 5, 6, 7 };

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d ", arr2[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d ", arr3[i][j]);
		}
		printf("\n");
			}
	return 0;
}

void ThreeDimArraySize()
{
	int arr[2][3][4];
	double arr2[5][5][5];
	printf("높이 2, 세로3, 가로 4의 int형 3차원 배열 : %d \n", sizeof(arr));
	printf("높이 5, 세로5, 가로 5의 doulbe형 3차원 배열 : %d \n", sizeof(arr2));
	return 0;
}

void ThreeDimArrayAccess()
{
	int mean = 0, i, j;
	int record[3][3][2] = {
		{
			{70, 80},
			{94, 90},
			{70, 85}
		},
		{
			{83, 90},
			{95, 60},
			{90, 82}
		},
		{
			{98, 89},
			{99, 94},
			{91, 87}
		}
	};

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 2; j++)
		{
			mean += record[0][i][j];
		}
	}
	printf("A 학급 전체 평균 : %g \n", (double)mean / 6);

	mean = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 2; j++)
		{
			mean += record[1][i][j];
		}
	}
	printf("B 학급 전체 평균 : %g \n", (double)mean / 6);

	mean = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 2; j++)
		{
			mean += record[2][i][j];
		}
	}
	printf("C 학급 전체 평균 : %g \n", (double)mean / 6);
}

int main(void)
{
	//TwoDimArraySize();
	//PopuResarch();
	//PopuResarch2();
	//TwoDimArrayAddr();
	//TwoDimArrayInit();
	//ThreeDimArraySize();
	//ThreeDimArrayAccess();
}