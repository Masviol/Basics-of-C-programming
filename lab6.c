#include <stdio.h>
#include <stdlib.h>

int main() {
    char arr[] = {'a','b','c','d'};
    char* ell;
    ell = arr;
    int n = sizeof(arr);
    for (int i = 0; i < n; i++) {
        printf("%c", ell[i]);
        printf(" ");
    }
    printf("\n");

    char* temp = (char*)malloc(n*sizeof(int));
    n = 2 * n; // доп. задание

    temp = (char*) realloc(temp,n); //доп. задание
    for (int i = 0; i < n; i++) {
        temp[i] = ell[i];
    }
    for (int i = 0; i < n; i++) {
        printf("%c", temp[i]);
        printf(" ");
    }
    free(temp);

    return 0;
}
