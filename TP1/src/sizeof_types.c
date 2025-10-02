#include <stdio.h>

char a;
short b;
int c;
long d;
float e;
double f;
long double g;
unsigned long long int h;
signed long long int i;
long int j;
unsigned long int k;
signed long int m;
unsigned int n;
signed int o;
unsigned short p;
signed short q;
unsigned char r;
signed char s;

int main() {
    printf("Taille de char : %zu octets\n", sizeof(a));
    printf("Taille de short : %zu octets\n", sizeof(b));
    printf("Taille de int : %zu octets\n", sizeof(c));
    printf("Taille de long : %zu octets\n", sizeof(d));
    printf("Taille de float : %zu octets\n", sizeof(e));
    printf("Taille de double : %lzu octets\n", sizeof(f));
    printf("Taille de long double : %zu octets\n", sizeof(g));
    printf("Taille de unsigned long long int : %zu octets\n", sizeof(h));
    printf("Taille de signed long long int : %zu octets\n", sizeof(i));
    printf("Taille de long int : %zu octets\n", sizeof(j));
    printf("Taille de unsigned long int : %zu octets\n", sizeof(k));
    printf("Taille de signed long int : %zu octets\n", sizeof(m));
    printf("Taille de unsigned int : %zu octets\n", sizeof(n));
    printf("Taille de signed int : %zu octets\n", sizeof(o));
    printf("Taille de unsigned short : %zu octets\n", sizeof(p));
    printf("Taille de signed short : %zu octets\n", sizeof(q));
    printf("Taille de unsigned char : %zu octets\n", sizeof(r));
    printf("Taille de signed char : %zu octets\n", sizeof(s));
    return 0;
}