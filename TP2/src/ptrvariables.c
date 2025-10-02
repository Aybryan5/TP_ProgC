#include <stdio.h>

int main(void) {
    char c = 'A';
    short s = 1234;
    int i = -101;
    long li = 1234567L;
    long long lli = 9876543210LL;
    float f = 2.0f;
    double d = 3.14159;
    long double ld = 1.2345L;

    char *pc = &c;
    short *ps = &s;
    int *pi = &i;
    long *pli = &li;
    long long *plli = &lli;
    float *pf = &f;
    double *pd = &d;
    long double *pld = &ld;

    printf("Avant la manipulation :\n");
    printf("Adresse de c : %p, Valeur de c : %02x\n", (void*)pc, (unsigned int)(unsigned char)c);
    printf("Adresse de s : %p, Valeur de s : %04x\n", (void*)ps, (unsigned int)(unsigned short)s);
    printf("Adresse de i : %p, Valeur de i : %08x\n", (void*)pi, (unsigned int)i);
    printf("Adresse de li : %p, Valeur de li : %lx\n", (void*)pli, (unsigned long)li);
    printf("Adresse de lli : %p, Valeur de lli : %llx\n", (void*)plli, (unsigned long long)lli);

    union { float f; unsigned int u; } fu; fu.f = f;
    union { double d; unsigned long long u; } du; du.d = d;

    printf("Adresse de f : %p, Valeur de f : %08x\n", (void*)pf, fu.u);
    printf("Adresse de d : %p, Valeur de d : %016llx\n", (void*)pd, du.u);

    printf("Adresse de ld : %p, Valeur de ld : ", (void*)pld);
    unsigned char *bytes = (unsigned char*)&ld;
    int n = (int)sizeof(long double);
    int bi = 0;
    while (bi < n) {
        printf("%02x", (unsigned int)bytes[bi]);
        bi = bi + 1;
    }
    printf("\n");

    *pc = 'B';
    *ps = *ps + 1;
    *pi = *pi - 1;
    *pli = *pli + 10;
    *plli = *plli - 10;
    *pf = 1.0f;
    *pd = 2.71828;
    *pld = 3.0L;

    fu.f = f;
    du.d = d;
    printf("\nAprès la manipulation :\n");
    printf("Adresse de c : %p, Valeur de c : %02x\n", (void*)pc, (unsigned int)(unsigned char)c);
    printf("Adresse de s : %p, Valeur de s : %04x\n", (void*)ps, (unsigned int)(unsigned short)s);
    printf("Adresse de i : %p, Valeur de i : %08x\n", (void*)pi, (unsigned int)i);
    printf("Adresse de li : %p, Valeur de li : %lx\n", (void*)pli, (unsigned long)li);
    printf("Adresse de lli : %p, Valeur de lli : %llx\n", (void*)plli, (unsigned long long)lli);
    printf("Adresse de f : %p, Valeur de f : %08x\n", (void*)pf, fu.u);
    printf("Adresse de d : %p, Valeur de d : %016llx\n", (void*)pd, du.u);
    printf("Adresse de ld : %p, Valeur de ld : ", (void*)pld);
    bytes = (unsigned char*)&ld;
    n = (int)sizeof(long double);
    bi = 0;
    while (bi < n) {
        printf("%02x", (unsigned int)bytes[bi]);
        bi = bi + 1;
    }
    printf("\n");

    return 0;
}
