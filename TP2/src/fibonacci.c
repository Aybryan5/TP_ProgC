#include <stdio.h>

int main(void) {
    int n;
    printf("Entrez n: ");
    if (scanf("%d", &n) != 1) {
        return 0;
    }

    int u0 = 0;
    int u1 = 1;

    if (n <= 0) {
        printf("%d\n", u0);
        return 0;
    }

    printf("%d, %d", u0, u1);

    int i = 2;
    while (i <= n) {
        int un = u0 + u1;
        printf(", %d", un);
        u0 = u1;
        u1 = un;
        i = i + 1;
    }
    printf("\n");
    return 0;
}
