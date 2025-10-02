
#include <stdio.h>

int main(void) {
    char s1[64] = "Hello";
    char s2[64] = " World!";


    int len1 = 0;
    while (s1[len1] != '\0') {
        len1 = len1 + 1;
    }


    int len2 = 0;
    while (s2[len2] != '\0') {
        len2 = len2 + 1;
    }

    char copy[128];
    int i = 0;
    while (s1[i] != '\0') {
        copy[i] = s1[i];
        i = i + 1;
    }
    copy[i] = '\0';

    char concat[128];
    int j = 0;
    while (s1[j] != '\0') {
        concat[j] = s1[j];
        j = j + 1;
    }
    int k = 0;
    while (s2[k] != '\0') {
        concat[j] = s2[k];
        j = j + 1;
        k = k + 1;
    }
    concat[j] = '\0';

    printf("Longueur s1: %d\n", len1);
    printf("Longueur s2: %d\n", len2);
    printf("Copie: %s\n", copy);
    printf("Concat: %s\n", concat);
    return 0;
}
