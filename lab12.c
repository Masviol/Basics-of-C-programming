#include <stdio.h>
#include <time.h>

int main() {
    FILE *file = fopen("dati.txt", "w");
    time_t t = time(NULL);
    struct tm *aTm = localtime(&t);
    for (int i = 0; i < 10; i++)
        fprintf (file, "%04d/%02d/%02d %02d:%02d:%02d \n", aTm->tm_year + 1900, aTm->tm_mon + 1, aTm->tm_mday + i, aTm->tm_hour,
               aTm->tm_min, aTm->tm_sec);
    return 0;
}
