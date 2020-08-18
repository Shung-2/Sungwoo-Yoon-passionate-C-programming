#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void ReadWriteChar(void);
void ConsoleEOF(void);
int Exchange(int ch);

int main(void) {

	//420p
	ReadWriteChar();
	//421p
	ConsoleEOF();
	//447p Problem 21-1
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

}

void ReadWriteChar(void)
{
	int ch1, ch2; 
	ch1 = getchar();
	ch2 = fgetc(stdin);

	putchar(ch1);
	fputc(ch2, stdout);
	return 0;
} 

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
	return 0;
}

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