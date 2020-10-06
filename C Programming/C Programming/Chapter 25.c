#include <stdlib.h>
#include <Stdio.h>
#include <string.h>

char name[30];

char* ReadUserName()
{
    //char name[30];
    char* name = (char*)malloc(sizeof(char) * 30);
    printf("What's your name ? : ");
    gets(name);
    return name;
}

void ReadStringFault1()
{
    char* name1;
    char* name2;
    name1 = ReadUserName();
    printf("Name 1 : %s \n", name1);
    name2 = ReadUserName();
    printf("Name 2 : %s \n", name2);
    //return 0;
}

void ReadStringFault2()
{
    char* name1;
    char* name2;
    name1 = ReadUserName();
    printf("Name 1 : %s \n", name1);
    name2 = ReadUserName();
    printf("Name 2 : %s \n", name2);

    printf("Name 1 : %s \n", name1);
    printf("Name 2 : %s \n", name2);

    //return 0;
}

int DynamicMemoryAllocation()
{
    int* ptr1 = (int*)malloc(sizeof(int));
    int* ptr2 = (int*)malloc(sizeof(int) * 7);
    int i;

    *ptr1 = 20;
    for (i = 0; i < 7; i++)
        ptr2[i] = i + 1;

    printf("%d  \n", *ptr1);
    for (i = 0; i < 7; i++)
        printf("%d ", ptr2[i]);

    free(ptr1);
    free(ptr2);
    //return 0;
}

void ReadStringFault3()
{
    char* name1;
    char* name2;
    name1 = ReadUserName();
    printf("Name 1 : %s \n", name1);
    name2 = ReadUserName();
    printf("Name 2 : %s \n", name2);

    printf("Name 1 : %s \n", name1);
    printf("Name 2 : %s \n", name2);

    free(name1);
    free(name2);
    //return 0;
}

void Problem25_2_1()
{
    int maxlen, len, i;
    char* str;
    printf("문자열의 최대 길이 입력 : ");
    scanf("%d", &maxlen);
    getchar();
    str = (char*)malloc(sizeof(char) * (maxlen + 1));

    printf("문자열 입력 : ");
    fgets(str, maxlen + 1, stdin);
    str[strlen(str) - 1] = 0;
    len = strlen(str);

    for (i = len; i > 0; i--)
    {
        if (str[i] == ' ')
        {
            printf("%s ", &str[i + 1]);
            str[i] = 0;
        }
    }

    printf("%s", &str[0]);
    free(str);
    // return 0;
}

void Problem25_2_2()
{
    int arrlen = 5;
    int idx = 0;
    int i;
    int* arr = (int*)malloc(sizeof(int) * arrlen);

    while (1)
    {
        printf("정수 입력 : ");
        scanf("%d", &arr[idx]);
        if (arr[idx] == -1)
        {
            break;
        }

        if (arrlen == idx + 1)
        {
            arrlen += 3;
            arr = (int*)realloc(arr, sizeof(int) * arrlen);
        }
        idx++;
    }
    for (i = 0; i < idx; i++)
        printf("%d ", arr[i]);
    free(arr);
    return 0;
}

int main(void)
{
    //ReadStringFault1();
    //ReadUserName();
    //ReadStringFault2();
    //ReadUserName();
    //DynamicMemoryAllocation();
    //ReadStringFault3();
    //ReadUserName();
    //Problem25_2_1();
    //Problem25_2_2();
}