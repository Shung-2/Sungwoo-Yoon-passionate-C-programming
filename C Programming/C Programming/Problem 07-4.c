#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// Problem 1
	int start, end;
	int result;

	printf("시작 값과 끝 값을 입력해주세요 : ");
	scanf("%d %d", &start, &end);

	for ( result = 0; start <= end; start++ )
	{
		result += start;
	}
	printf("합계 : %d \n", result);

	// Problem 2
	int num, i;
	int total = 1;

	printf("팩토리얼을 계산할 정수를 입력하세요 : ");
	scanf("%d", &num);

	for (i = 1; i <= num; i++)
	{
		total = total * i;
	}
	printf("%d! = %d", num, total);
	return 0;
}