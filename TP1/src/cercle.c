#include <stdio.h>
#include <math.h>

float rayon;
float pi = 3.14159;
float aire;
float perimetre;

int main() {
    rayon = 5.0;
    aire = pi * pow(rayon, 2);
    perimetre = 2 * pi * rayon;

    printf("Aire du cercle : %f\n", aire);
    printf("Perimetre du cercle : %f\n", perimetre);

    return 0;
}