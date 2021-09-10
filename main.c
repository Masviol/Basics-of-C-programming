#include "stdio.h"

int main(){
    int num;
    char str[1000];
    printf("Введите строку или целое число\n");
    if (scanf("%d", &num) == 1) {
        printf("Вы ввели целое число - %d", num);
    }
    else if (scanf("%s", &str) == 1) {
        printf("Вы ввели строку - %s", str);
    }
    return 0;
}