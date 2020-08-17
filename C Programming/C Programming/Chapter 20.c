#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Problem 1
void RotateArray(int(*x1)[4]);
void ShowArray(int(*x1)[4]);

//Problem 2
int MakeSnail(int(*ptrArr)[100], int size);
int ShowArray2(int(*ptrArr)[100], int size);

int main(void) {

	////Problem 1
	//int Array[4][4] = {
	//	{ 1, 2, 3, 4},
	//	{ 5, 6, 7, 8},
	//	{ 9, 10, 11, 12},
	//	{ 13, 14, 15, 16}
	//};
	//
	//for (int i = 0; i < 4; i++)
	//{
	//	for (int j = 0; j < 4; j++)
	//	{
	//		printf("%d ", Array[i][j]);
	//	}
	//	printf("\n");
	//}
	//printf("\n");
	//
	//for (int i = 0; i < 3; i++)
	//{
	//	RotateArray(Array);
	//	ShowArray(Array);
	//}

	////Problem 2
	//int num;
	//int arr[50][50] = { 0 };

	//printf("숫자를 입력하시오 : ");
	//scanf("%d", &num);

	//MakeSnail(arr, num);
	//ShowArray2(arr, num);
	//printf("\n");

	////Problem 3
	//printf("난수의 범위 : 0부터 %d까지 \n", RAND_MAX);
	//for (int i = 0; i < 5; i++)
	//{
	//	printf("난수 출력 : %d \n", rand()%100);
	//}
	//printf("\n");

	////Problem 4
	//int dice1, dice2;

	//srand((int)time(NULL));

	//dice1 = (rand() % 6) + 1;
	//dice2 = (rand() % 6) + 1;

	//printf("주사위 1의 결과 : %d \n", dice1);
	//printf("주사위 2의 결과 : %d \n", dice2);
	//printf("\n");

	////Problem 5
	//int User, Computer;
	//int Win = 0, Draw = 0;

	//srand(time(NULL));

	//while (1) {

	//	printf("바위는 1, 가위는 2, 보는 3: ");
	//	scanf("%d", &User);
	//	Computer = rand() % 3 + 1;

	//	if (Computer == 1) {
	//		if (User == 1) {
	//			printf("당신은 바위 선택, 컴퓨터는 바위 선택, 비겼습니다. \n");
	//			Draw++;
	//		}

	//		else if (User == 2) {
	//			printf("당신은 가위 선택, 컴퓨터는 바위 선택, 졌습니다. \n");
	//			break;
	//		}

	//		else {
	//			printf("당신은 보 선택, 컴퓨터는 바위 선택, 이겼습니다. \n");
	//			Win++;
	//		}
	//	}

	//	else if (Computer == 2) {
	//		if (User == 1) {
	//			printf("당신은 바위 선택, 컴퓨터는 가위 선택, 이겼습니다. \n");
	//			Win++;
	//		}

	//		else if (User == 2) {
	//			printf("당신은 가위 선택, 컴퓨터는 가위 선택, 비겼습니다. \n");
	//			Draw++;
	//		}

	//		else {
	//			printf("당신은 보 선택, 컴퓨터는 가위 선택, 졌습니다. \n");
	//			break;
	//		}
	//	}

	//	else {
	//		if (User == 1) {
	//			printf("당신은 바위 선택, 컴퓨터는 보 선택, 졌습니다. \n");
	//			break;
	//		}

	//		else if (User == 2) {
	//			printf("당신은 가위선택, 컴퓨터는 보 선택, 이겼습니다. \n");
	//			Win++;
	//		}

	//		else {
	//			printf("당신은 보 선택, 컴퓨터는 보 선택, 비겼습니다. \n");
	//			Draw++;
	//		}
	//	}
	//}
	//printf("\n");
	//printf("게임의 결과: %d 승, %d 무\n", Win, Draw);
	//printf("\n");

	//Problem 6
	int Question[3], Answer[3];
	int i = 1, Check, Retry, Strike = 0, Ball;
	int LIMIT = 10;

	srand((int)time(NULL));
	
	Question[0] = rand() % 10;
	while (i < 3) {
		Question[i] = rand() % 10;

		for (Check = 0; Check < i; Check++)
		{
			if (Question[Check] == Question[i])
			{
				break;
			}
		}
		if (Check == i)
		{
			i++;
		}
	}

	printf("Start Game!\n");
	for (Retry = 1; Retry < LIMIT && Strike < 3; Retry++)
	{
		printf("3개의 숫자 선택 : ", Retry + 1);
		scanf("%d %d %d", &Answer[0], &Answer[1], &Answer[2]);

		Strike = Ball = 0;
		for (i = 0; i < 3; i++)
		{
			for (Check = 0; Check < 3; Check++)
			{
				if (Question[i] == Answer[Check])
				{
					if (i == Check)
					{
						Strike++;
					}
					else
					{
						Ball++;
					}
				}
			}
		}
		printf("%d번째 도전 결과 : %dStrike, %dBall!! \n", Retry, Strike, Ball);
		printf("\n");
	}

	if (Strike == 3)
	{
		printf("Game Over!\n");
	}
	else
	{
		printf("Game Over!\n");
	}
}

//Problem 1
void RotateArray(int(*x1)[4]) {

	int Temp[4][4];

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			Temp[j][3 - i] = x1[i][j];
		}
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			x1[i][j] = Temp[i][j];
		}
	}
}
void ShowArray(int(*x1)[4]) {
	
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%d ", x1[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

//Problem 2
int MakeSnail(int(*ptrArr)[100], int size) {

	int i = 0, j = 0;
	int x = 0, y = 0;
	int count = 1, limit = size, turn = 0;
	int plusMinus = +1;

	while (count < (size * size)) {

		for (i = 1; i < limit; i++) {
			ptrArr[x][y] = count;
			y = y + 1 * plusMinus;
			count++;
		}
		turn++;

		if (count >= (size * size)) {
			break;
		}

		for (j = 1; j < limit; j++) {
			ptrArr[x][y] = count;
			x = x + 1 * plusMinus;
			count++;
		}

		plusMinus = plusMinus * (-1);
		turn++;

		if (turn % 4 == 0) {
			limit = limit - 2;
			x++;
			y++;
		}
	}

	ptrArr[x][y] = count;
	return 0;
}
int ShowArray2(int(*ptrArr)[100], int size) {

	int i, j;

	for (i = 0; i < size; i++) {
		for (j = 0; j < size; j++)
		{
			printf("%2d ", ptrArr[i][j]);
		}			
		printf("\n");
	}
	return 0;
}