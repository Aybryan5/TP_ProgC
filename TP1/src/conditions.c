#include <stdio.h>

int main() {
    int somme = 0;
    for (int i = 0; i < 1000; i++) {
        if (i % 5 == 0 || i % 7 == 0) {
            somme = somme + i;
        }
        else if (i % 11 == 0) {
            continue;
        }
        if (somme >= 5000) {
            break;
        }
    }
    printf("La somme est : %d\n", somme);
    return 0;
}