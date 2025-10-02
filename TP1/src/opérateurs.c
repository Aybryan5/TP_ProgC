#include <stdio.h>

int a = 16;
int b = 3;
int main() {
    printf("Addition : %d + %d = %d\n", a, b, a + b);
    printf("Soustraction : %d - %d = %d\n", a, b, a - b);
    printf("Multiplication : %d * %d = %d\n", a, b, a * b);
    printf("Division : %d / %d = %d\n", a, b, a / b);
    printf("Modulo : %d %% %d = %d\n", a, b, a % b);
    printf("Comparaison : %d = %d = %d\n", a, b, a == b);
    printf("Comparaison Supérieure : %d > %d = %d\n", a, b, a>b);
    return 0;
}