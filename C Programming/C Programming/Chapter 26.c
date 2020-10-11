#include <stdio.h>

#define NAME "홍길동"
#define AGE 24
#define PRINT_ADDR puts("주소 : 경기도 용인시\n")

#define SQUARE(X) X*X

#define PI 3.14
#define PRODUCT(X, Y) ((X)*(Y))
#define CIRCLE_AREA(R) (PRODUCT((R), (R))*PI)

#define DIFF_ABS(X, Y) ( (x)>(y) ? (x)-(y) : (y)-(x) )

#define ADD 1
#define MIN 0

#define HIT_NUM 7

#define STRING_JOB(A, B) #A "의 직업은 " #B "입니다."

//#define STNUM(Y, S, P) YSP
//#define STNUM(Y, S, P) Y S P
//#define STNUM(Y, S, P) ((Y)*100000+(S)*1000+(P))
#define STNUM(Y, S, P) Y ## S ## P

#define ADD1(x, y, z) ((x)+(y)+(z))
#define MUL(x, y, z) ((x)*(y)*(z))

#define AREA(r) ((r) * (r) * PI)

#define MAX(a,b) ( (a) > (b) ? (a) : (b) )

int MacroConst()
{
	printf("이름 : %s \n", NAME);
	printf("이름 : %d \n", AGE);
	PRINT_ADDR;
	return 0;
}

int MacroFunction()
{
	int num = 20;

	/* 정상적 결과 출력 */
	printf("Square of num : %d \n", SQUARE(num));
	printf("Square of -5 : %d \n", SQUARE(-5));
	printf("Square of 2.5 : %g \n", SQUARE(2.5));

	/* 비정상적 결과 출력 */
	printf("Square of -5 : %d \n", SQUARE(3+2));
	/* 비정상적 결과 출력물 수정*/
	printf("Square of -5 : %d \n", SQUARE((3 + 2)));

	return 0;
}

int MacroUseMacro()
{
	double rad = 2.1;
	printf("반지름 %g의 원의 넓이 : %g \n", rad, CIRCLE_AREA(rad));
}

// 사용하면 에러가 나는 매크로
/* int MacroFunctionWeakness()
{
	printf("두 값의 차 : %d \n", DIFF_ABS(5, 7));
	printf("두 값의 차 : %g \n", DIFF_ABS(1.8, -1.4));
	return 0;
}
*/

int if_endif()
{
	int num1, num2;
	printf("두 개의 정수 입력 : ");
	scanf("%d %d", &num1, &num2);

#if ADD
	printf("%d + %d = %d \n", num1, num2, num1 + num2);
#endif

#if MIN
	printf("%d - %d = %d \n", num1, num2, num1 - num2);
#endif

	return 0; 
}

int ifdef_endif()
{
	int num1, num2;
	printf("두 개의 정수 입력 : ");
	scanf("%d %d", &num1, &num2);

#ifdef ADD
	printf("%d + %d = %d \n", num1, num2, num1 + num2);
#endif

#ifdef MIN
	printf("%d - %d = %d \n", num1, num2, num1 - num2);
#endif

	return 0;
}
 
int else_endif()
{
#if HIT_NUM==5
	puts("매크로 상수 HIT_NUM은 현재 5입니다.");
#else
	puts("매크로 상수 HIT_NUM은 현재 5가 아닙니다.");
#endif
	return 0;
}

int elif_endif()
{
#if HIT_NUM==5
	puts("매크로 상수 HIT_NUM은 현재 5입니다.");
#elif HIT_NUM==6
	puts("매크로 상수 HIT_NUM은 현재 6입니다.");
#elif HIT_NUM==7
	puts("매크로 상수 HIT_NUM은 현재 7입니다.");
#else
	puts("매크로 상수 HIT_NUM은 현재 5,6,7은 확실히 아닙니다.");
#endif
	return 0;
}

int MacroOpToString()
{
	printf("%s \n", STRING_JOB(이동춘, 나무꾼));
	printf("%s \n", STRING_JOB(한상순, 사냥꾼));
	return 0;
}

int UnivStdNum()
{
	printf("학번 : %d \n", STNUM(10, 65, 175));
	printf("학번 : %d \n", STNUM(10, 65, 075)); //8진수로 생각을 해버림
	return 0;
}

int Problem26_1_1()
{
	printf("3 + 4 + 5 = %d \n", ADD1(3, 4, 5));
	printf("3 * 4 * 5 = %d \n", MUL(3, 4, 5));
	return 0;
}

int Problem26_1_2()
{
	double rad;
	printf("원의 반지름 입력 : ");
	scanf("%lf", &rad);
	printf("원의 넓이 : %g \n", AREA(rad));
	return 0;
}

int Problem26_1_3()
{
	int num1, num2;
	printf("두 개의 정수 입력 : ");
	scanf("%d %d", &num1, &num2);
	printf("%d가(이) 더 큰 수 입니다. \n", MAX(num1, num2));
	return 0;
}

int main(void)
{
	//MacroConst();
	//MacroFunction();
	//MacroUseMacro();
	//MacroFunctionWeakness();
	//if_endif();
	//ifdef_endif();
	//else_endif();
	//elif_endif();
	//MacroOpToString();
	//UnivStdNum();
	//Problem26_1_1();
	//Problem26_1_2();
	//Problem26_1_3();
}