#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

// 454p, 467p
struct point
{
	int xpos, ypos;
	// 467p add
	struct point* ptr;
};
// 454p
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

// 461p
void StructArray(void);

// 462p
void InitStructArray(void);

// 463p Problem 22-2
void Problem22_2(void);

// 464p
void StructPointer(void);

// 465p
struct circle
{
	double radius;
	struct point* center;
};
void StructPointerMem(void);

// 467p
void PointRelation(void);

// 468p
void StructValAddress(void);

int main(void)
{
	// 454p
	TwoPointDistance();
	printf("\n");

	// 456p
	TelephoneInfo();
	printf("\n");

	// 458p
	InitStructVal();
	printf("\n");

	// 458p Problem 22-1
	Problem22_1();
	printf("\n");

	// 461p
	StructArray();
	printf("\n");

	// 462p
	InitStructArray();
	printf("\n");

	// 463p Problem 22-2
	Problem22_2();
	printf("\n");

	// 464p
	StructPointer();
	printf("\n");

	// 465p
	StructPointerMem();
	printf("\n");

	// 467p
	PointRelation();
	printf("\n");

	// 468p
	StructValAddress();
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

// 461p
void StructArray(void) {
	struct point arr[3];
	int i;

	for (i = 0; i < 3; i++)
	{
		printf("점의 좌표 입력 : ");
		scanf("%d %d", &arr[i].xpos, &arr[i].ypos);
	}

	for (i = 0; i < 3; i++)
	{
		printf("[%d. %d] ", arr[i].xpos, arr[i].ypos);
	}
} 

// 462p
void InitStructArray(void)
{
	struct person arr[3] = {
		{"이승기", "010-1212-0001", 21},
		{"정지영", "010-1313-0002", 22},
		{"이승기", "010-1717-0003", 19}
	};

	int i;
	for (i = 0; i < 3; i++)
	{
		printf("%s %s %d", arr[i].name, arr[i].phoneNum, arr[i].age);
	}
}

// 463p
void Problem22_2(void)
{
	struct employee arr[3];
	int i;

	for (i = 0; i < 3; i++)
	{
		printf("이름 입력 : ");
		scanf("%s", arr[i].user_name);
		printf("주민등록번호 입력 : ");
		scanf("%s", arr[i].user_ID);
		printf("급여 입력 : ");
		scanf("%d", &arr[i].user_salary);
	}

	for (i = 0; i < 3; i++)
	{
		printf("이름 : %s \n", arr[i].user_name);
		printf("주민등록번호 : %s \n", arr[i].user_ID);
		printf("급여 : %d \n", arr[i].user_salary);
	}
}

// 464p
void StructPointer(void)
{
	struct point pos1 = { 1, 2 };
	struct point pos2 = { 100, 200 };
	struct point* pptr = &pos1;

	(*pptr).xpos += 4;
	(*pptr).ypos += 5;
	printf("[%d, %d] \n", pptr->xpos, pptr->ypos);

	pptr = &pos2;
	pptr->xpos += 1;
	pptr->ypos += 2;
	printf("[%d, %d] \n", (*pptr).xpos, (*pptr).ypos);
}

// 465p
void StructPointerMem(void)
{
	struct point cen = { 2, 7 };
	double rad = 5.5;

	struct circle ring = { rad, &cen };
	printf("원의 반지름 : %g \n", ring.radius);
	printf("원의 중심 [%d, %d] \n", (ring.center)->xpos, (ring.center)->ypos);
}

// 467p
void PointRelation(void)
{
	struct point pos1 = { 1, 1 };
	struct point pos2 = { 2, 2 };
	struct point pos3 = { 3, 3 };

	pos1.ptr = &pos2;
	pos2.ptr = &pos3;
	pos3.ptr = &pos1;

	printf("점의 연결관계... \n");
	printf("[%d, %d]와(과) [%d, %d] 연결 \n",
		pos1.xpos, pos1.ypos, pos1.ptr->xpos, pos1.ptr->ypos);
	printf("[%d, %d]와(과) [%d, %d] 연결 \n",
		pos2.xpos, pos2.ypos, pos2.ptr->xpos, pos2.ptr->ypos);
	printf("[%d, %d]와(과) [%d, %d] 연결 \n",
		pos3.xpos, pos3.ypos, pos3.ptr->xpos, pos3.ptr->ypos);
}

// 468p
void StructValAddress(void)
{
	struct point pos = { 10, 20 };
	struct person man = { "이승기", "010-1212-0001", 21 };
	printf("%p %p \n", &pos, &pos.xpos);
	printf("%p %p \n", &man, man.name);
}