#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

// 473p
void TypeNameTypedef(void);
// 475p
void StructTypedef(void);

int main(void)
{
	// 473p
	TypeNameTypedef();
	// 475p
	StructTypedef();
}

// 473p
void TypeNameTypedef(void)
{
	typedef int INT;
	typedef int* PTR_INT;
	typedef unsigned int UINT;
	typedef unsigned int* PTR_UINT;
	typedef unsigned char UCHAR;
	typedef unsigned char* PTR_UCHAR;

	INT num1 = 120;
	PTR_INT pnum1 = &num1;

	UINT num2 = 190;
	PTR_UINT pnum2 = &num2;

	UCHAR ch = 'Z';
	PTR_UCHAR pch = &ch;

	printf("%d, %u, %c \n", *pnum1, *pnum2, *pch);
}
// 475p
void StructTypedef(void) {

struct point
{
	int xpos, ypos;
};

typedef struct point Point;

typedef struct person
{
	char name[20];
	char phoneNum[20];
	int age;
} Person;

Point pos = { 10, 20 };
Person man = { "ÀÌ½Â±â", "010-1212-0001", 21 };
printf("%d %d \n", pos.xpos, pos.ypos);
printf("%s %s %d \n", man.name, man.phoneNum, man.age);
}