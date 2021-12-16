// main.c

#include "stdio.h"
#include "myrectangle.h"

int main ()
{
    struct Rectangle value= {0, 0, 0, 0, 0, 0, 0, 0};
    value = create_struct (value);
    printf("Площадь прямоугольника = %d\n", Square_Rectangle(value));
    printf("Периметр прямоугольника = %d\n", Perimeter_Rectangle (value));
    return 0;
}

++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

// myrectangle.c (файл с функциями) 

#include "math.h"
#include "myrectangle.h"

int Square_Rectangle(struct Rectangle p) {
    int S;
    S = sqrtf((powf(p.x2 - p.x1, 2)) + (powf(p.y2 - p.y1, 2))) * sqrtf((powf(p.x3 - p.x2, 2)) + (powf(p.y3 - p.y2, 2)));
    return S;
}

int Perimeter_Rectangle(struct Rectangle p) {
    int AB;
    int BC;
    int P;
    AB = sqrtf((powf(p.x2 - p.x1, 2)) + (powf(p.y2 - p.y1, 2)));
    BC = sqrtf((powf(p.x3 - p.x2, 2)) + (powf(p.y3 - p.y2, 2)));
    P = (AB + BC) * 2;
    return P;
}

struct Rectangle create_struct (struct Rectangle p) {
    p.x1 = 2;
    p.y1 = 2;
    p.x2 = 2;
    p.y2 = 4;
    p.x3 = 6;
    p.y3 = 4;
    p.x4 = 6;
    p.y4 = 2;
    return p;
}

++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

// myrectangle.h (файл, где задаются функции)

#ifndef LAB11_MYRECTANGLE_H
#define LAB11_MYRECTANGLE_H

struct Rectangle {
    int x1, y1, x2, y2, x3, y3, x4, y4;
};

struct Rectangle create_struct (struct Rectangle value);
int Square_Rectangle(struct Rectangle value);
int Perimeter_Rectangle(struct Rectangle value);

#endif //LAB11_MYRECTANGLE_H
