#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// Problem 1
	char Voca[50];
	int Len = 0;

	printf("문자열을 입력하세요 : ");
	scanf("%s", Voca);
	
	while (Voca[Len] != 0)
	{
		Len++;
	}

	printf("입력한 영단어의 길이는 %d입니다. \n", Len);
	printf("\n");

	// Problem 2
	char Voca2[50];
	int Len2 = 0, i;
	char temp;

	printf("영단어를 입력하세요 : ");
	scanf("%s", Voca2);

	while (Voca2[Len2] != 0)
	{
		Len2++;
	}

	for (i = 0; i < Len2 / 2; i++)
	{
		temp = Voca2[i];
		Voca2[i] = Voca2[(Len2 - i) - 1];
		Voca2[(Len2 - i) - 1] = temp;
	}
	printf("뒤집힌 영단어는 : %s \n", Voca2);
	printf("\n");

	// Problem 3
	char Voca3[50];
	int Len3 = 0, i2;
	char Max = 0;

	printf("영단어를 입력하세요 : ");
	scanf("%s", Voca3);

	while (Voca3[Len3] != 0)
	{
		Len3++;
	}

	for (i = 0; i < Len3; i++)
	{
		if (Max < Voca3[i])
		{
			Max = Voca3[i];
		}
	}
	printf("가장 큰 아스키 코드를 가진 문자는 %c입니다.", Max);
	printf("\n");
	return 0;
}