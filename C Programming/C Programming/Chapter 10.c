#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int TenNumberToSixteen(int Num1); // Problem 1
int GuGuDan(int a, int b); // Problem 2
int SolveGCD(int Num2, int Num3); // Problem 3
int Money(); // Problem 4
//int PrimeNumber(int n); // Problem 5
int FindHourMinuteSecond(); // Problem 6
int FindFindKMixium(); // Problem 7
int CalExpo(int result, int count); // Problem 8

int main(Void)
{
    // Problem 1
    int Num1 = 0;
    TenNumberToSixteen(Num1);

    // Problem 2
    int Num2, Num3;
    printf("구구단을 이용할 2개의 정수를 입력하세요 : ");
    scanf("%d %d", &Num2, &Num3);

    if (Num2 < Num3)
    {
        GuGuDan(Num2, Num3);
    }
    else
    {
        GuGuDan(Num3, Num2);
    }

    // Problem 3
    int Num4, Num5;
    printf("최대공약수를 구할 두 수를 입력하세요 : ");
    scanf("%d %d", &Num4, &Num5);
    SolveGCD(Num4, Num5);

    // Problem 4
    Money();

    // Problem 5
    int nEnd_Condition = 0;
    int num = 2;

    while (nEnd_Condition != 10)
    {
        int i;
        int nCount = 0;

        for (i = 2; i <= num; i++)
        {
            if (num % i == 0)
                nCount++;
        }
        if (nCount == 1)
        {
            printf("%d,", num);
            nEnd_Condition++;
        }
        num++;
    }

    // Problem 6
    FindHourMinuteSecond();

    // Problem 7
    FindKMixium();

    // Problem 8
    int Num6 = 0;
    printf("정수를 입력하세요 : ");
    scanf("%d", &Num6);
    printf("2의 %d승은 %d \n", Num6, CalExpo(2, Num6));
    return 0;
}

int TenNumberToSixteen(int Num1) // Problem 1
{
    printf("10진수 정수를 입력하세요 : ");
    scanf("%d", &Num1);
    printf("16진수로 변환된 값은 : %x입니다. \n", Num1);
    return 0;
}

int GuGuDan(int a, int b) // Problem 2
{
    int i, j;
    for (i = a; i < b + 1; i++)
    {
        for (j = 1; j < 10; j++)
        {
            printf("%d * %d = %d \n", i, j, i * j);
        }
        printf("\n");
    }
    return 0;
}

int SolveGCD(int Num2, int Num3) // Problem 3
{
    int i;
    int Sum = 0;

    for (i = 1; i <= Num3; i++)
    {
        if (Num2 % i == 0 && Num3 % i == 0)
        {
            Sum = i;
        }
    }
    printf("최대 공약수는 : %d입니다. \n", Sum);
    return 0;
}

int Money()
{
    int Cash, Bread = 500, Shripmp = 700, Coke = 400;
    int x, y, z;

    printf("현재 당신이 소유하고 있는 금액 : ");
    scanf("%d", &Cash);

    for (x = 1; x < Cash / Bread; x++)
    {
        for (y = 1; y < Cash / Shripmp; y++)
        {
            for (z = 1; z < Cash / Coke; z++)
            {
                if (Cash == Bread * x + Shripmp * y + Coke * z)
                {
                    printf("크림빵 %d개, 새우깡 %d개, 콜라 %d개 \n", x, y, z);
                }
            }
        }
    }
    return 0;
}

//int PrimeNumber(int n)
//{
//   int Div = 0, i;
//
//   for (i = 1; i <= n; i++)
//   {
//      if (n % i == 0)
//      {
//         Div++;
//      }
//   }
//   if (Div == 2)
//   {
//      return 1;
//   }
//   return 0;
//}

int FindHourMinuteSecond()
{
    int hour = 0, minute = 0, second = 0;

    printf("초를 입력하세요 : ");
    scanf("%d", &second);

    hour = second / 3600;
    minute = (second / 3600) / 60;
    second = second % 60;

    printf("%d시간 %d분 %d초 \n", hour, minute, second);
    return 0;
}

int FindKMixium()
{
    int num, count = 0, temp = 2;
    printf("정수를 입력하세요 : ");
    scanf("%d", &num);

    while (1) {
        if (temp > num)
            break;
        temp *= 2;
        count++;
    }
    printf("공식을 만족하는 K의 최댓값은 %d입니다.", count);
    return 0;
}

int CalExpo(int result, int count)
{
    if (count == 0)
    {
        return 1;
    }
    return result *= CalExpo(result, --count);
}