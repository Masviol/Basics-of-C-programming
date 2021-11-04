#include <stdio.h>

int main() {
    // задание 1

    char s[100], s1[50], s2[50];
    printf("Введите первую строку: ");
    gets(s1);
    printf("Введите вторую строку: ");
    gets(s2);
    int i = 0;
    int k = 0;
    while (s1[i]) {
        s[i] = s1[i];
        i++;
    }
    while (s2[k]) {
        s[i] = s2[k];
        k++;
        i++;
    }
    s[i] = 0;
    printf("1) ");
    puts(s);
    i = 0;
    while (s2[i]) {
        s[i] = s2[i];
        i++;
    }
    k = 0;
    while (s1[k]) {
        s[i] = s1[k];
        i++;
        k++;
    }

    //задание 2

    if (i - k == k) {
        int j = 0;
        while (s1[j]) {
            if (s1[j] == s2[j]) {
                j++;
            } else {
                printf("2) NO");
                break;
            }
        }
        if (s1[j] == s2[j]) {
            printf("2) YES");
        }
    } else {
        printf("2) NO");
    }
    printf("\n");

    // задание 3

    int m = 0;
    while (s1[m]) {
        s[m] = s1[m];
        m++;
    }
    s[m] = 0;
    printf("3) ");
    puts(s);

    // задание 4

    printf("\n4) Длина первой строки: %d | Длина второй строки: %d \n", k, i - k);

    // задание 5

    printf("Введите символ: ");
    char c;
    scanf("%c", &c);
    printf("5) ");
    int i0 = i - k;
    int k0 = k;
    int i1, k1;

    while (k0 >= 0 & s1[k0] != c) {
        if (k0 == 0 & s1[k0] != c)
            printf("В первой строке совпадений нет | ");
        k0--;
    }

    if (s1[k0] == c)
        printf("В первой строке совпадение на элементе: %d | ", k0);

    while (i0 >= 0 & s2[i0] != c) {
        if (i0 == 0 & s2[i0] != c)
            printf("Во второй строке совпадений нет");
        i0--;
    }

    if (s2[i0] == c)
        printf("Во второй строке совпадение на элементе: %d", i0);

    return 0;
    
}
