#include <stdio.h>
#include <string.h>

void FristFileWrite()
{
	FILE* fp = fopen("data.txt", "wt");
	
	if (fp == NULL) {
		puts("파일 오픈 실패!");
		// return -1;
	}

	fputc('A', fp);
	fputc('B', fp);
	fputc('C', fp);
	fclose(fp);
	// return 0;
}

void FirstFileRead()
{
	int ch, i;
	FILE* fp = fopen("data.txt", "rt");
	
	if (fp == NULL)	{
		puts("파일 오픈 실패!");
		// return -1;
	}

	for (i = 0; i < 3; i++)
	{
		ch = fgetc(fp);
		printf("%c \n", ch);
	}
	fclose(fp);
	// return0;
}

void TextDataFileWrite()
{
	FILE* fp = fopen("simple.txt", "wt");

	if (fp == NULL) {
		puts("파일 오픈 실패!");
		// return -1;
	}

	fputc('A', fp);
	fputc('B', fp);
	fputs("My name is Hoing \n", fp);
	fputs("Your name is Yoon \n", fp);
	fclose(fp);
	// return 0;
}

void TextDataFileRead()
{
	char str[30];
	int ch;
	FILE* fp = fopen("simple.txt", "rt");
	if (fp == NULL) {
		puts("파일 오픈 실패!");
		// return -1;
	}

	ch = fgetc(fp);
	printf("%c \n", ch);
	ch = fgetc(fp);
	printf("%c \n", ch);

	fgets(str, sizeof(str), fp);
	printf("%s", str);
	fgets(str, sizeof(str), fp);
	printf("%s", str);

	fclose(fp);
	//return 0;
}

void TextCharFileCopy()
{
	FILE* src = fopen("src.txt", "rt");
	FILE* des = fopen("dst.txt", "rt");
	int ch;

	if (src == NULL || des == NULL) {
		puts("파일 오픈 실패");
		// return -1;
	}

	while ((ch = fgetc(src)) != EOF)
	{
		fputc(ch, des);
	}

	if (feof(src) != 0)
	{
		puts("파일 복사 완료!");
	}
	else
	{
		puts("파일 복사 실패!");
	}

	fclose(src);
	fclose(des);
	// return 0;
}

void TextStringFileCopy()
{
	FILE* src = fopen("src.txt", "rt");
	FILE* des = fopen("dst.txt", "rt");
	char str[20];

	if (src == NULL || des == NULL) {
		puts("파일 오픈 실패");
		// return -1;
	}

	while (fgets(str, sizeof(str), src)!=NULL) {
		fputs(str, des);
	}
	
	if (feof(src) != 0)
	{
		puts("파일 복사 완료!");
	}
	else
	{
		puts("파일 복사 실패!");
	}

	fclose(src);
	fclose(des);
	// return 0;
}

void BinaryFileCopy()
{
	FILE* src = fopen("src.bin", "rb");
	FILE* des = fopen("dst.bin", "wb");
	char buf[20];
	int readCnt;

	if (src == NULL || des == NULL) {
		puts("파일 오픈 실패");
		// return -1;
	}

	while (1)
	{
		readCnt = fread((void*)buf, 1, sizeof(buf), src);

		if (readCnt < sizeof(buf))
		{
			if (feof(src) != 0)
			{
				fwrite((void*)buf, 1, readCnt, des);
				puts("파일 복사 완료");
				break;
			}
			else
			{
				puts("파일 복사 실패!");
			}
			break;
		}
		fwrite((void*)buf, 1, sizeof(buf), des);
	}
	fclose(src);
	fclose(des);
	// return 0;
}

void Problem24_1_1()
{
	FILE* fp = fopen("mystory.txt", "wt");

	if (fp == NULL) {
		puts("파일 오픈 실패!");
		// return -1;
	}

	fputs("#이름 : 윤성우 \n", fp);
	fputs("#주민등로번호 : 900208-1012589 \n", fp);
	fputs("#전화번호 : 010-1111-2222 \n", fp);
	fclose(fp);
	// return 0;
}

void Problem24_1_2()
{
	FILE* fp = fopen("mystory.txt", "at");

	if (fp == NULL) {
		puts("파일 오픈 실패!");
		// return -1;
	}

	fputs("#즐겨먹는 음식 : 짬뽕, 탕수육 \n", fp);
	fputs("#취미 : 축구 \n", fp);
	fclose(fp);
	// return 0;
}

void Problem24_1_3()
{
	char str[100];
	FILE* fp = fopen("mystory.txt", "rt");

	while (fgets(str, sizeof(str), fp) != NULL)
		printf(str);
	fclose(fp);
	//return 0;
}

void ComplexFileWrite()
{
	char name[10];
	char sex;
	int age;

	FILE* fp = fopen("friend.txt", "wt");
	int i;

	for (i = 0; i < 3; i++)
	{
		printf("이름, 성별, 나이 순 입력 : ");
		scanf("%s %c %d", name, &sex, &age);
		getchar(); //버퍼에 남아있는 \n의 로멸을 위해
		fprintf(fp, "%s %c %d", name, sex, age);
	}
	fclose(fp);
	//return 0;
}

void ComplexFileRead()
{
	char name[10];
	char sex;
	int age;

	FILE* fp = fopen("friend.txt", "rt");
	int ret;

	while (1)
	{
		ret = fscanf(fp, "%s %c %d", name, &sex, &age);
		if (ret == EOF)
			break;
		printf("%s %c %d \n", name, sex, age);
	}
	fclose(fp);
	//return 0;
}

typedef struct fren
{
	char name[10];
	char sex;
	int age;
} Friend;

void StructFileWriteRead()
{
	FILE* fp;
	Friend myfren1;
	Friend myfren2;

	/** File Write **/
	fp = fopen("friend.bin", "wb");
	printf("이름, 성별, 나이 순 입력 : ");
	scanf("%s %c %d", myfren1.name, &(myfren1.sex), &(myfren1.age));
	fwrite((void*)&myfren1, sizeof(myfren1), 1, fp);
	fclose(fp);

	/** File Read **/
	fp = fopen("friend.bin", "rb");
	fread((void*)&myfren2, sizeof(myfren2), 1, fp);
	printf("%s %c %d", myfren2.name, myfren2.sex, myfren2.age);
	fclose(fp);
	//return 0;
}

void MoveFileReWrPos()
{
	/* 파일 생성 */
	FILE* fp = fopen("text.txt", "wt");
	puts("1233456789", fp);
	fclose(fp);

	/* 파일 개방 */
	fp = fopen("text.txt", "rt");

	/* SEEK_END Test */
	fseek(fp, -2, SEEK_END);
	putchar(fgetc(fp));

	/* SEEK_SET Test */
	fseek(fp, 2, SEEK_SET);
	putchar(fgetc(fp));

	/* SEEK_CUR Test */
	fseek(fp, 2, SEEK_CUR);
	putchar(fgetc(fp));

	fclose(fp);
	//return 0;
}

void TellFileReWrPos()
{
	long fpos;
	int i;

	/* 파일 생성 */
	FILE* fp = fopen("text.txt", "wt");
	fputs("1234-", fp);
	fclose(fp);

	/* 파일 개방 */
	fp = fopen("text.txt", "rt");

	for (i = 0; i < 4; i++)
	{
		putchar(fgetc(fp));
		fpos = ftell(fp);
		fseek(fp, -1, SEEK_END);
		putchar(fgetc(fp));
		fseek(fp, fpos, SEEK_SET);
	}
	fclose(fp);
	//return 0;
}

long GetFileSize(FILE* fp)
{
	long fpos, fsize;
	fpos = ftell(fp);

	fseek(fp, 0, SEEK_END);
	fsize = ftell(fp);
	fseek(fp, fpos, SEEK_SET);
	return fsize;
}

int Problem24_2_1()
{
	char str[100];
	FILE* fp = fopen("ABC.txt", "rt");
	fgets(str, 100, fp);
	fputs(str, stdout);
	printf("파일의 크기 : %ld \n", GetFileSize(fp));
	fgets(str, 100, fp);
	fputs(str, stdout);
	printf("파일의 크기 : %ld \n", GetFileSize(fp));
	fgets(str, 100, fp);
	fputs(str, stdout);
	fclose(fp);
	return 0;
}

int main(void)
{
	//FristFileWrite();
	//FirstFileRead();
	//TextDataFileWrite();
	//TextDataFileRead();
	//TextCharFileCopy();
	//TextStringFileCopy();
	//BinaryFileCopy();
	//Problem24_1_1();
	//Problem24_1_2();
	//Problem24_1_3();
	//ComplexFileWrite();
	//ComplexFileRead();
	//StructFileWriteRead();
	//MoveFileReWrPos();
	//TellFileReWrPos();
	//Problem24_2_1();
}