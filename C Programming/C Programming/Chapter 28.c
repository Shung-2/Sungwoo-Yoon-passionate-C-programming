#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Dialog.h"

typedef struct book
{
	char name[30];
	char writer[30];
	int page;
} Book;

void Problem28_1()
{
	Book info[3];

	printf("���� ���� �Է�");
	for (int i = 0; i < 3; i++)
	{
		printf("���� : ");
		gets_s(info[i].writer, sizeof(info[i].writer));
		printf("���� : ");
		gets_s(info[i].name, sizeof(info[i].name));
		printf("������ �� : ");
		scanf_s("%d", &(info[i].page));
		getchar();
	}
	printf("\n");

	printf("���� ���� ��� \n\n");
	for (int i = 0; i < 3; i++)
	{
		printf("book%d \n", i + 1);
		printf("���� : %s \n", info[i].writer);
		printf("���� : %s \n", info[i].name);
		printf("������ �� : %d \n\n", info[i].page);
	}
}

void Problem28_2()
{
	Book* info[3];

	printf("���� ���� �Է�");
	for (int i = 0; i < 3; i++)
	{
		info[i] = (Book*)malloc(sizeof(Book));
		printf("���� : ");
		gets_s(info[i]->writer, sizeof(info[i]->writer));
		printf("���� : ");
		gets_s(info[i]->name, sizeof(info[i]->name));
		printf("������ �� : ");
		scanf_s("%d", &(info[i]->page));
		getchar();
	}
	printf("\n");

	printf("���� ���� ��� \n\n");
	for (int i = 0; i < 3; i++)
	{
		printf("book%d \n", i + 1);
		printf("���� : %s \n", info[i]->writer);
		printf("���� : %s \n", info[i]->name);
		printf("������ �� : %d \n\n", info[i]->page);
	}
}

typedef struct complex
{
	double x, y;
} Complex;

Complex AddComplex(Complex num1, Complex num2)
{
	Complex Add = { num1.x + num2.x, num1.y + num2.y };
	return Add;
}

Complex MultComplex(Complex num1, Complex num2)
{
	Complex Mult;
	Mult.x = (num1.x * num2.x) - (num1.y * num2.y);
	Mult.y = (num1.x * num2.y) + (num1.y * num2.x);
	return Mult;
}

void Problem28_3()
{
	Complex num[2];
	Complex res_ad, res_mul;

	for (int i = 0; i < 2; i++)
	{
		printf("���Ҽ� �Է� %d [�Ǽ�, ���] : ", i + 1);
		scanf_s("%lf %lf", &(num[i].x), &(num[i].y));
	}

	res_ad = AddComplex(num[0], num[1]);
	res_mul = MultComplex(num[0], num[1]);
	printf("ADD : %.3f + %.3fj \n", res_ad.x, res_ad.y);
	printf("MLUTI : %.3f + %.3fj \n", res_mul.x, res_mul.y);
}

int Problem28_4(int argc, char* argv[])
{
	char str[20];
	int numA = 0;
	int numP = 0;
	FILE* fpr;

	if (argc < 2)
	{
		printf("���α׷��� ��ġ�� ��ο� text.txt�� �Է����ּ���. \n");
		printf("���α׷��� ��ġ�� ��� : %s\n", argv[0]);
		return -1;
	}

	fopen_s(&fpr, argv[1], "rt");

	if (fpr == NULL)
	{
		puts("���� ���� Error !");
		return -1;
	}

	while (1)
	{
		if (fscanf_s(fpr, "%s", str, sizeof(str)) == EOF) break;
		else if (str[0] == 'A' || str[0] == 'a') numA++;
		else if (str[0] == 'P' || str[0] == 'p') numP++;
	}

	printf("A�� �����ϴ� �ܾ��� �� : %d \n", numA);
	printf("P�� �����ϴ� �ܾ��� �� : %d \n", numP);

	if (feof(fpr) != 0)
	{
		puts("Complete");
	}
	else
	{
		puts("Error");
	}

	fclose(fpr);
	return 0;
}

int Problem28_5(int argc, char* argv[])
{
	FILE* fpr1;
	FILE* fpr2;
	char str1[1000];
	char str2[1000];

	if (argc != 3)
	{
		puts("���α׷��� ��ġ�� ��ο� ���� �� �ؽ�Ʈ ���ϸ��� �Է��ϼ���.");
		printf("���α׷��� ��ġ�� ��� : %s\n", argv[0]);
		return - 1;
	}

	fopen_s(&fpr1, argv[1], "rt");
	fopen_s(&fpr2, argv[2], "rt");

	if (fpr1 == NULL || fpr2 == NULL)
	{
		puts("File Open Error!");
		return -1;
	}

	while (fgets(str1, sizeof(str1), fpr1) != NULL);
	while (fgets(str2, sizeof(str2), fpr2) != NULL);

	if (strcmp(str1, str2) == 0)
	{
		puts("�� ���� ������ ������ ��ġ �մϴ�.");
	}
	else
	{
		puts("�� ���� ������ ����ġ �մϴ�.");
	}

	fclose(fpr1);
	fclose(fpr2);

	return 0;
}

int Problem28_6()
{
	int num;
	PBook pb[BLEN];
	int pbidx = 0;
	int del, ser;

	FILE* fpr;
	fopen_s(&fpr, "Dialog.txt", "rt");
	if (fpr != NULL) {
		fscanf_s(fpr, "%d", &pbidx);
		for (int i = 0; i < pbidx; i++)
		{
			fscanf_s(fpr, "%s", pb[i].name, LEN);
			fscanf_s(fpr, "%s", pb[i].phone, LEN);
		}
		fclose(fpr);
	}

	while (1)
	{
		Menu(&pbidx);

		do {
			printf("Choose the menu: "); scanf_s("%d", &num);
		} while (num < 1 || num>5);

		switch (num)
		{
		case Insert:
			if (Menu_Insert(pb, &pbidx) == -1)
			{
				puts("��ȭ��ȣ�ΰ� �� á���ϴ�. \n");
			}
			else
				puts("\t\t Data Inserted \n");
			break;

		case Delete:
			del = Menu_Delete(pb, &pbidx);
			if (del = 1) {
				puts("��ȭ��ȣ�ΰ� �� á���ϴ�. \n");
			}
			else if (del == 1)
			{
				puts("\t\t Data Deleteed \n");
			}
			else
			{
				puts("��ġ�ϴ� �����Ͱ� �����ϴ�.");
			}
			break;

		case Search:
			ser = Menu_Search(pb, &pbidx);
			if (ser == -1)
			{
				puts("ã���ô� �����Ͱ� �����ϴ�.");
			}
			else
			{
				printf("Name : %s \t Tel : %s \n\n", pb[ser].name, pb[ser].phone);
			}
			break;

		case Printall:
			Menu_Print_All(pb, &pbidx);
			break;

		case Exit:
			fopen_s(&fpr, "Dialog.txt", "wt");
			fprintf(fpr, "%d", pbidx);
			for (int i = 0; i < pbidx; i++)
			{
				fprintf(fpr, "%s %s", pb[i].name, pb[i].phone);
			}
			fclose(fpr);
			return 0;
		}
	}
}

int main()
{
	//Problem28_1();
	//Problem28_2();
	//Problem28_3();
	//Problem28_4();
	//Problem28_5();
	Problem28_6();
}