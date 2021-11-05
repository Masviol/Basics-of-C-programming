#include <stdio.h>

enum days {
    monday,
    tuesday,
    wednesday,
    thursday,
    friday,
    saturday,
    sunday
};

struct square {
    int a;
};

int p(a){
    int per = a * 4;
    return(per);
}

struct MP3 {
    unsigned int PLAY: 1;
    unsigned int PAUSE: 1;
    unsigned int RECORD: 1;
};

union myunion {
    struct MP3 b;
    short i;
};

int main() {
    // задание 1

    enum days mon;
    mon = monday;
    printf("1) Понедельник - %d\n", mon);

    // задание 2

    struct square ans = { 1, };
    printf("2) Периметр квадрата = %d\n", p(ans.a));

    // задание 3

    union myunion press;
    scanf("%x", &press.i);
    printf("3) \n");
    printf("PLAY - %d\n", press.b.PLAY);
    printf("PAUSE - %d\n", press.b.PAUSE);
    printf("RECORD - %d\n", press.b.RECORD);

    return 0;
}
