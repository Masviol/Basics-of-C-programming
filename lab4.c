#include <stdio.h>

#define min 1
#define max 10

int main() {
    int a;
    printf ("Введите число\n");
    scanf("%d", &a);
    int res = min <= a&&a <= max;
    printf ("Входит ли число в диапозон от %d до %d?\n%s\n", min, max, res ? "Да" : "Нет");
    int b;
    printf ("Введите число\n");
    scanf("%d", &b);
    printf ("Значение: %d", (b>>1)%2);
    return 0;
}
