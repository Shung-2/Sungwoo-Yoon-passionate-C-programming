#include <stdio.h>

#define NAME "ȫ�浿"
#define AGE 24
#define PRINT_ADDR puts("�ּ� : ��⵵ ���ν�\n")

#define SQUARE(X) X*X

#define PI 3.14
#define PRODUCT(X, Y) ((X)*(Y))
#define CIRCLE_AREA(R) (PRODUCT((R), (R))*PI)

#define DIFF_ABS(X, Y) ( (x)>(y) ? (x)-(y) : (y)-(x) )

#define ADD 1
#define MIN 0

#define HIT_NUM 7

#define STRING_JOB(A, B) #A "�� ������ " #B "�Դϴ�."

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
	printf("�̸� : %s \n", NAME);
	printf("�̸� : %d \n", AGE);
	PRINT_ADDR;
	return 0;
}

int MacroFunction()
{
	int num = 20;

	/* ������ ��� ��� */
	printf("Square of num : %d \n", SQUARE(num));
	printf("Square of -5 : %d \n", SQUARE(-5));
	printf("Square of 2.5 : %g \n", SQUARE(2.5));

	/* �������� ��� ��� */
	printf("Square of -5 : %d \n", SQUARE(3+2));
	/* �������� ��� ��¹� ����*/
	printf("Square of -5 : %d \n", SQUARE((3 + 2)));

	return 0;
}

int MacroUseMacro()
{
	double rad = 2.1;
	printf("������ %g�� ���� ���� : %g \n", rad, CIRCLE_AREA(rad));
}

// ����ϸ� ������ ���� ��ũ��
/* int MacroFunctionWeakness()
{
	printf("�� ���� �� : %d \n", DIFF_ABS(5, 7));
	printf("�� ���� �� : %g \n", DIFF_ABS(1.8, -1.4));
	return 0;
}
*/

int if_endif()
{
	int num1, num2;
	printf("�� ���� ���� �Է� : ");
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
	printf("�� ���� ���� �Է� : ");
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
	puts("��ũ�� ��� HIT_NUM�� ���� 5�Դϴ�.");
#else
	puts("��ũ�� ��� HIT_NUM�� ���� 5�� �ƴմϴ�.");
#endif
	return 0;
}

int elif_endif()
{
#if HIT_NUM==5
	puts("��ũ�� ��� HIT_NUM�� ���� 5�Դϴ�.");
#elif HIT_NUM==6
	puts("��ũ�� ��� HIT_NUM�� ���� 6�Դϴ�.");
#elif HIT_NUM==7
	puts("��ũ�� ��� HIT_NUM�� ���� 7�Դϴ�.");
#else
	puts("��ũ�� ��� HIT_NUM�� ���� 5,6,7�� Ȯ���� �ƴմϴ�.");
#endif
	return 0;
}

int MacroOpToString()
{
	printf("%s \n", STRING_JOB(�̵���, ������));
	printf("%s \n", STRING_JOB(�ѻ��, ��ɲ�));
	return 0;
}

int UnivStdNum()
{
	printf("�й� : %d \n", STNUM(10, 65, 175));
	printf("�й� : %d \n", STNUM(10, 65, 075)); //8������ ������ �ع���
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
	printf("���� ������ �Է� : ");
	scanf("%lf", &rad);
	printf("���� ���� : %g \n", AREA(rad));
	return 0;
}

int Problem26_1_3()
{
	int num1, num2;
	printf("�� ���� ���� �Է� : ");
	scanf("%d %d", &num1, &num2);
	printf("%d��(��) �� ū �� �Դϴ�. \n", MAX(num1, num2));
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