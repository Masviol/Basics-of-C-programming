#include <stdio.h>
#include <math.h>

typedef struct {
    int X, Y;
} coords;

int NOD(num1, num2) {
    int N;
    for (int i = 1; i <= num1; i++) {
        if (num1 % i == 0 && num2 % i == 0)
            N = i;
    }
    return N;
}

void dist(coords Cords[], int count) {

    int repair = 0;
    float distance[count *(count - 1)];

    for (int i = 0; i < count; i++) {
        printf("Введите координаты X и Y: ");
        scanf("%d %d", &Cords[i].X, &Cords[i].Y);
    }

    for (int i = 0; i < count; i++) {
        for (int j = 0; j < count; j++) {
            if (i != j) {
                distance[i * count + j - repair] = sqrt(pow(Cords[i].X - Cords[j].X, 2) +
                                                        pow(Cords[i].Y - Cords[j].Y, 2));
            } else {
                repair++;
            }
        }
    }

    for (int i = 0; i < count * (count - 1); i++) {
        printf("%d) %.2f \n",i + 1, distance[i]);
    }
}

int main() {
    // 1 задание
    printf("1)\n\n");

    int num1;
    int num2;
    printf("Введите 2 натуральных числа: ");
    scanf("%d %d", &num1, &num2);

    printf("НОД : %d\n", NOD(num1, num2));

    printf("НОК : %d\n\n", (num1 * num2) / NOD(num1, num2));

    //2 задание
    printf("2)\n\n");

    int count, number;
    printf("Введите кол-во координат: ");
    scanf("%d", &count);

    coords Cord[count];
    dist(Cord, count);

    return 0;
}
