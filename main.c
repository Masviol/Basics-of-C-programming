#include <stdio.h>
#include "math.h"

int main(){
    float a;
    float pi = 3.14;
    printf("Введите переменную а\n");
    scanf("%f", &a);
    float z1, z2;
    z1 = 2*pow(sin (3 * pi - 2 * a) * cos (5 * pi + 2 * a), 2);
    printf("z1 = %.2f\n", z1);
    z2 = 0.25 - 0.25 * sin(0.25 * pi - 8 * a);
    printf("z2 = %.2f\n", z2);
    return 0;
}