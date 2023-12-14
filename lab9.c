#include <stdio.h>

int main()
{
    char a[80];
    int countNumber = 0, countUpper = 0, countLower = 0;

    printf("\n Введите строку : \n");
    gets(a);

    for (int n = 0; n < sizeof(a) / sizeof(char) - 1; n++)
    {
        if (a[n] >= '0' && a[n] <= '9') countNumber++;
        else if (a[n] >= 'A' && a[n] <= 'Z') countUpper++;
        else if (a[n] >= 'a' && a[n] <= 'z') countLower++;
    }

    printf("\n Чисел = %d \n Заглавных = %d \n Прописных = %d\n\n", countNumber, countUpper, countLower);


    // 2 задание
    printf("2)\n\n");

    int time;
    printf("Введите кол-во минут: ");
    scanf("%d", &time);

    if (time <= 499)
        printf("К оплате 499 руб.\n");
    else
        printf("К оплате %d", (time - 499) * 2 + 499);

    return 0;
}
