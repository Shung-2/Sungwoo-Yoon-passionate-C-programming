#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Hol(int X)
{
    if (X % 2 == 1)
    {
        printf("%d", X);
    }
    return 0;
}

int JJak(int Y)
{
    if (Y % 2 == 0)
    {
        printf("%d", Y);
    }
    return 0;
}

int TenToTwo(int Division_Num)
{
    int result = Division_Num % 2;
    Division_Num /= 2;
    if (Division_Num > 0)
    {
        TenToTwo(Division_Num);
    }
    printf("%d", result);
    return;
}

int main(void)
{
    // Problem 1
    //int Array[10];
    //int i;

    //printf("�� 10���� ���ڸ� �Է��ϼ��� : ");
    //for (int i = 0; i < 10; i++)
    //{
    //    scanf("%d", &Array[i]);
    //}

    //printf("\nȦ�� ��� : ");
    //for (int i = 0; i < 10; i++)
    //{
    //    Hol(Array[i]);
    //}

    //printf("\n¦�� ��� : ");
    //for (int i = 0; i < 10; i++)
    //{
    //    JJak(Array[i]);
    //}
    //return 0;

    //// Problem 2
    //int Num;

    //printf("10���� ���� �Է� : ");
    //scanf("%d", &Num);

    //TenToTwo(Num);
    //printf("\n");

    //return 0;

    // Problem 3
    int Array3[10], Num3;
    int OddCount = 0, EvenCount = 9;

    printf("�� 10���� ���� �Է�\n");
    for (int i = 0; i < 10; i++)
    {
        printf("�Է� : ");
        scanf("%d", &Num3);
        if (Num3 % 2 == 0)
        {
            Array3[EvenCount] = Num3;
            EvenCount--;
        }
        else
        {
            Array3[OddCount] = Num3;
            OddCount++;
        }
    }

    printf("�迭 ����� ��� : ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d", Array3[i]);
    }
    return 0;
}