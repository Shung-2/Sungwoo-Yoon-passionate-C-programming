#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ReadWriteChar(void);
void ConsoleEOF(void);
int Exchange(int ch);
void WriteString(void);
void ReadString(void);
void NeedInputBufFlush(void);
void CleatLieFromReadBuffer(void);
void RemoveBSN(void);
void RemoveBSN2(char str[]);
void StringCopyCase(void);
void StringConcatCase(void);
void StringCompCase(void);
void ConvStringTiPrimitive(void);
int ConvToInt(char c);
int GetSpaceIdx(char str[]);
int Samename(char str4[], char str5[]);
int SameAge(char str4[], char str5[]);

int main(void) {

	//420p
	ReadWriteChar();
	printf("\n");

	//421p
	ConsoleEOF();
	printf("\n");

	//427p Problem 21-1
	//Problem 1
	int ch;
	printf("문자를 입력하세요 : ");

	ch = getchar();
	ch = Exchange(ch);

	if (ch == -1)
	{
		printf("범위를 벗어난 입력값입니다.");
		return -1;
	}
	putchar(ch);
	printf("\n\n");

	//424p
	WriteString();
	printf("\n");

	//426p
	ReadString();
	printf("\n");

	//431p
	NeedInputBufFlush();
	printf("\n");

	//435p
	RemoveBSN();
	printf("\n");

	//437p
	StringCopyCase();
	printf("\n");

	//440p
	StringConcatCase();
	printf("\n");

	//443p
	StringCompCase();
	printf("\n");

	//444p
	ConvStringTiPrimitive();

	//445p Problem 21-2
	//Problem 1
	char str[30];
	int len, sum = 0;

	printf("문자열 입력 : ");
	fgets(str, sizeof(str), stdin);
	len = strlen(str);

	for (int i = 0; i < len; i++)
	{
		if ('1' <= str[i] && str[i] <= '9')
		{
			sum += ConvToInt(str[i]);
		}
	}
	printf("숫자의 총 합 : %d \n", sum);

	//445 Problem 21-2
	//Problem 2
	char str1[20];
	char str2[20];
	char str3[40];

	printf("문자열 1 입력 : ");
	fgets(str1, sizeof(str1), stdin);
	str1[strlen(str1) - 1] = 0;

	printf("문자열 2 입력 : ");
	fgets(str2, sizeof(str2), stdin);
	str2[strlen(str2) - 1] = 0;

	strcpy(str3, str1);
	strcat(str3, str2);
	printf("조합된 문자열 : %s \n", str3);

	//445 Problem 21-2
	//Problem 3
	char str4[20];
	char str5[20];

	printf("첫번째 사람 정보 입력 : ");
	fgets(str4, sizeof(str4), stdin);
	str4[strlen(str4) - 1] = 0;

	printf("두번째 사람 정보 입력 : ");
	fgets(str5, sizeof(str5), stdin);
	str5[strlen(str5) - 1] = 0;

	if (Samename(str4, str5))
	{
		puts("이름이 동일합니다.");
	}
	else
	{
		puts("이름이 동일하지 않습니다.");
	}

	if (SameAge(str4, str5))
	{
		puts("나이가 동일합니다.");
	}
	else
	{
		puts("나이가 동일하지 않습니다.");
	}
}

//420p
void ReadWriteChar(void)
{
	int ch1, ch2;
	ch1 = getchar();
	ch2 = fgetc(stdin);

	putchar(ch1);
	fputc(ch2, stdout);
}

//421p
void ConsoleEOF(void)
{
	int ch;

	while (1)
	{
		ch = getchar();
		if (ch == EOF)
		{
			break;
		}
		putchar(ch);
	}
}

//447p
int Exchange(int ch)
{
	int diff = 'a' - 'A';

	if (ch >= 'a' && ch <= 'Z')
	{
		return ch + diff;
	}
	else if (ch >= 'a' && ch <= 'z')
	{
		return ch - diff;
	}
	else
	{
		return -1;
	}
}

//424p
void WriteString(void)
{
	char* str = "Simple String";

	printf("1. put test ------ \n");
	puts(str);
	puts("So Simple String");

	printf("2. fputs test ----- \n");
	fputs(str, stdout), printf("\n");
	fputs("So Simple String", stdout); printf("\n");

	printf("3. end of main ---- \n");
}

//426p
void ReadString(void)
{
	char str[7];
	int i;

	for (i = 0; i < 3; i++)
	{
		fgets(str, sizeof(str), stdin);
		printf("Read : %d : %s \n", i + 1, str);
	}
}

//431p
void NeedInputBufFlush(void)
{
	char perID[7];
	char name[10];

	fputs("주민번호 앞 6자리 입력 : ", stdout);
	fgets(perID, sizeof(perID), stdin);
	CleatLieFromReadBuffer();

	fputs("이름 입력 : ", stdout);
	fgets(name, sizeof(name), stdin);

	printf("주민번호 : %s \n", perID);
	printf("이름 : %s \n", name);
}

//432p
void CleatLieFromReadBuffer(void)
{
	while (getchar() != '\n');
}

//435p
void RemoveBSN(void)
{
	char str[100];
	printf("문자열 입력 : ");
	fgets(str, sizeof(str), stdin);
	printf("길이 : %d, 내용 : %s \n", strlen(str), str);

	RemoveBSN2(str);
	printf("길이 : %d, 내용 : %s \n", strlen(str), str);
}

void RemoveBSN2(char str[])
{
	int len = strlen(str);
	str[len - 1] = 0;
}

//437
void StringCopyCase(void)
{
	char str1[20] = "1234567890";
	char str2[20];
	char str3[5];

	/*** case 1 ****/
	strcpy(str2, str1);
	puts(str2);

	/*** case 1 ****/
	strncpy(str3, str1, sizeof(str3));
	puts(str3);

	/*** case 3 ****/
	strncpy(str3, str1, sizeof(str3) - 1);
	str3[sizeof(str3) - 1] = 0;
	puts(str3);
}

void StringConcatCase(void)
{
	char str1[20] = "First~";
	char str2[20] = "Second";

	char str3[20] = "Simple num: ";
	char str4[20] = "1234567890";

	/**** case1 ****/
	strcat(str1, str2);
	puts(str1);

	/**** case2 ****/
	strncat(str3, str4, 7);
	puts(str3);
}

//443
void StringCompCase(void)
{
	char str1[20];
	char str2[20];

	printf("문자열 입력 1 : ");
	scanf("%s", str1);
	printf("문자열 입력 2 : ");
	scanf("%s", str2);

	if (!strcmp(str1, str2))
	{
		puts("두 문자열은 왁벽히 동일합니다.");
	}
	else
	{
		puts("두 문자열은 동일하지 않습니다.");
		if (!strncmp(str1, str2, 3))
		{
			puts("그러나 앞 세 글자는 동일합니다.");
		}
	}
}

//444
void ConvStringTiPrimitive(void)
{
	char str[20];
	printf("정수 입력 : ");
	scanf("%s", str);
	printf("%d \n", atoi(str));

	printf("실수 입력 : ");
	scanf("%s", str);
	printf("%g \n", atof(str));
}

//445 Problem 21-2-1
int ConvToInt(char c)
{
	static int diff = 1 - '1';
	return c + diff;
}

//445 Problem 21-2-3
int GetSpaceIdx(char str[])
{
	int len, i;
	len = strlen(str);
	for (i = 0; i < len; i++)
	{
		if (str[i] == ' ')
		{
			return i;
		}
	}
	return -1;
}

int Samename(char str4[], char str5[])
{
	int idx1 = GetSpaceIdx(str4);
	int idx2 = GetSpaceIdx(str5);

	if (idx1 != idx2)
	{
		return 0;
	}
	else
	{
		return !strncmp(str4, str5, idx1);
	}
}

int SameAge(char str4[], char str5[])
{
	int idx1 = GetSpaceIdx(str4);
	int idx2 = GetSpaceIdx(str5);
	int age1, age2;

	age1 = atoi(&str4[idx1 + 1]);
	age2 = atoi(&str5[idx2 + 1]);

	if (age1 == age2)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}