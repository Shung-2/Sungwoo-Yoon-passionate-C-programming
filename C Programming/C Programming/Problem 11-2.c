#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// Problem 1
	char Voca[50];
	int Len = 0;

	printf("���ڿ��� �Է��ϼ��� : ");
	scanf("%s", Voca);
	
	while (Voca[Len] != 0)
	{
		Len++;
	}

	printf("�Է��� ���ܾ��� ���̴� %d�Դϴ�. \n", Len);
	printf("\n");

	// Problem 2
	char Voca2[50];
	int Len2 = 0, i;
	char temp;

	printf("���ܾ �Է��ϼ��� : ");
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
	printf("������ ���ܾ�� : %s \n", Voca2);
	printf("\n");

	// Problem 3
	char Voca3[50];
	int Len3 = 0, i2;
	char Max = 0;

	printf("���ܾ �Է��ϼ��� : ");
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
	printf("���� ū �ƽ�Ű �ڵ带 ���� ���ڴ� %c�Դϴ�.", Max);
	printf("\n");
	return 0;
}