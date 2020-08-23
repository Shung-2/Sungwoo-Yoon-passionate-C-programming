#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

// 454p
struct point
{
	int xpos, ypos;
};
void TwoPointDistance(void);

// 456p
struct person
{
	char name[20];
	char phoneNum[20];
	int age;
};
void TelephoneInfo(void);

// 458p
void InitStructVal(void);

// 458p Problem 22-1
struct employee
{
	char user_name[20];
	char user_ID[20];
	int user_salary;
};
void Problem22_1(void);

int main(void)
{
	// 454p
	TwoPointDistance();
	printf("\n");

	// 456p
	TelephoneInfo();
	printf("\n");

	// 458;
	InitStructVal();
	printf("\n");

	// 458p Problem 22-1
	Problem22_1();
	printf("\n");

}

// 454p
void TwoPointDistance(void)
{
	struct point pos1, pos2;
	double distance;

	//tputs("point1 pos: ", stdout);
	printf("point1 pos : ", stdout);
	scanf("%d %d", &pos1.xpos, &pos1.ypos);

	printf("point2 pos : ", stdout);
	scanf("%d %d", &pos2.xpos, &pos2.ypos);

	distance = sqrt((double)((pos1.xpos - pos2.xpos) * (pos1.xpos - pos2.xpos) + (pos1.ypos - pos2.ypos) * (pos1.ypos - pos2.ypos)));
	printf("두 점의 거리는 %g 입니다. \n", distance);
}

// 456p
void TelephoneInfo(void)
{
	struct person man1, man2;
	strcpy(man1.name, "안성준");
	strcpy(man1.phoneNum, "010-1122-3344");
	man1.age = 23;

	printf("이름 입력 : "); scanf("%s", man2.name);
	printf("번호 입력 : "); scanf("%s", man2.phoneNum);
	printf("나이 입력 : "); scanf("%d", &(man2.age));

	printf("이름 : %s \n", man1.name);
	printf("번호 : %s \n", man1.phoneNum);
	printf("나이 : %d \n", man1.age);

	printf("이름 : %s \n", man2.name);
	printf("번호 : %s \n", man2.phoneNum);
	printf("나이 : %d \n", man2.age);
} 

// 458p
void InitStructVal(void)
{
	struct point pos = { 10, 20 };
	struct person man = { "이승기", "010-1212-0001", 21 };
	printf("%d %d \n", pos.xpos, pos.ypos);
	printf("%s %s %d \n", man.name, man.phoneNum, man.age);
}

// 458p Problem 22-1
void Problem22_1(void)
{
	struct employee user1;

	printf("이름 입력 : "); 
	scanf("%s", user1.user_name);
	printf("주민등록번호 입력 : "); 
	scanf("%s", user1.user_ID);
	printf("급여 입력 : ");
	scanf("%d", &user1.user_salary);
	printf("\n");

	printf("이름 : %s \n", user1.user_name);
	printf("주민등록번호 : %s \n", user1.user_ID);
	printf("급여 : %d \n", user1.user_salary);
}