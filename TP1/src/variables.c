#include <stdio.h>

char a = 'a';
short b = 1;
int c = 1;
long d = 1;
float e = 1.0;
double f = 1.0;
long double g = 1.0;
unsigned long long int h = 1;
signed long long int i = -1;
long int j = -1;
unsigned long int k = 1;
signed long int m = -1;
unsigned int n = 1;
signed int o = -1;
unsigned short p = 1;
signed short q = -1;
unsigned char r = 1;
signed char s = -1;

int main() {
    printf("Type de a : char, valeur = %c\n", a);
    printf("Type de b : short, valeur = %hd\n", b);
    printf("Type de c : int, valeur = %d\n", c);
    printf("Type de d : long int, valeur = %ld\n", d);
    printf("Type de h : unsigned long long int, valeur = %llu\n", h);
    printf("Type de i : signed long long int, valeur = %lld\n", i);
    printf("Type de j : long int, valeur = %ld\n", j);
    printf("Type de k : unsigned long int, valeur = %lu\n", k);
    printf("Type de m : signed long int, valeur = %ld\n", m);
    printf("Type de n : unsigned int, valeur = %u\n", n);
    printf("Type de o : signed int, valeur = %d\n", o);
    printf("Type de p : unsigned short, valeur = %hu\n", p);
    printf("Type de q : signed short, valeur = %hd\n", q);
    printf("Type de r : unsigned char, valeur = %hhu\n", r);
    printf("Type de s : signed char, valeur = %hhd\n", s);
    printf("Type de e : float, valeur = %f\n", e);
    printf("Type de f : double, valeur = %lf\n", f);
    printf("Type de g : long double, valeur = %Lf\n", g);
    return 0;
}