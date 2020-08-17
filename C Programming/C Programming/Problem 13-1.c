#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    // Problem 1
    int arr[5] = { 1, 2, 3, 4, 5 };
    int* ptr = arr;   // int * ptr = &arr[0]과 같다.

    for (int y = 0; y < 5; y++) // 초기값 확인
    {
        printf("%d ", arr[y]);
    }

    printf("\n");

    for (int i = 0; i < 5; i++) // 값 2씩 증가
    {
        *ptr += 2;
        ptr++;
    }

    for (int y = 0; y < 5; y++) // 증가 된 값 확인
    {
        printf("%d ", arr[y]);
    }
    printf("\n");

    // Problem 2
    int arr2[5] = { 1,2,3,4,5 };
    int* ptr2 = arr2;
    int i = 0;

    for (int i = 0; i < 5; i++);
    {
        *(ptr2 + i) += 2;
    }

    for (int i = 0; i < 5; i++) // 증가 된 값 확인
    {
        printf("%d ", arr2[i]);
    }

    // Problem 3
    int arr3[5] = { 1,2,3,4,5 };
    int* ptr3 = &arr3[4];
    int total = 0;

    for (int i = 0; i < 5; i++)
    {
        total += *(ptr3--);
    }
    printf("%d ", total);
    printf("\n");

    // Problem 4
    int arr4[6] = { 1,2,3,4,5,6 };
    int* ptr4 = &arr4[0];
    int* ptr5 = &arr4[5];
    int temp;

    for (i = 0; i < 3; i++)
    {
        temp = *ptr4;
        *ptr4 = *ptr5;
        *ptr5 = temp;
        ptr4 += 1;
        ptr5 -= 1;
    }

    for (i = 0; i < 6; i++)
    {
        printf("%d ", arr4[i]);
    }
}