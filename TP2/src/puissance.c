#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int a = 2;
    int b = 3;

    int resultat = 1;

    int i = 0;
    while (i < b) {
        resultat = resultat * a;
        i = i + 1;
    }

    printf("%d^%d = %d\n", a, b, resultat);
    return 0;
}
