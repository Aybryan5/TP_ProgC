#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    const int N = 11;
    int ti[11];
    float tf[11];

    srand((unsigned int)time(NULL));

    int *pi = ti;
    float *pf = tf;
    int idx = 0;
    while (idx < N) {
        *(pi + idx) = rand() % 200;
        *(pf + idx) = (float)(rand() % 1000) / 100.0f;
        idx = idx + 1;
    }

    printf("Tableau d'entiers (avant):\n");
    idx = 0;
    while (idx < N) {
        printf("%d", *(pi + idx));
        if (idx < N - 1) printf(", ");
        idx = idx + 1;
    }
    printf("\n\n");

    printf("Tableau de floats (avant):\n");
    idx = 0;
    while (idx < N) {
        printf("%.2f", *(pf + idx));
        if (idx < N - 1) printf(", ");
        idx = idx + 1;
    }
    printf("\n\n");

    idx = 0;
    while (idx < N) {
        if ((idx % 2) == 0) {
            *(pi + idx) = *(pi + idx) * 3;
            *(pf + idx) = *(pf + idx) * 3.0f;
        }
        idx = idx + 1;
    }

    printf("Tableau d'entiers (après):\n");
    idx = 0;
    while (idx < N) {
        printf("%d", *(pi + idx));
        if (idx < N - 1) printf(", ");
        idx = idx + 1;
    }
    printf("\n\n");

    printf("Tableau de floats (après):\n");
    idx = 0;
    while (idx < N) {
        printf("%.2f", *(pf + idx));
        if (idx < N - 1) printf(", ");
        idx = idx + 1;
    }
    printf("\n");

    return 0;
}
