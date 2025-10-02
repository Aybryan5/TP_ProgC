#include <stdio.h>

struct Couleur {
    unsigned char r;
    unsigned char g;
    unsigned char b;
    unsigned char a;
};

int main(void) {
    struct Couleur couleurs[10];

    couleurs[0].r = 0xef; couleurs[0].g = 0x78; couleurs[0].b = 0x12; couleurs[0].a = 0xff;
    couleurs[1].r = 0x2c; couleurs[1].g = 0xc8; couleurs[1].b = 0x64; couleurs[1].a = 0xff;
    couleurs[2].r = 0x10; couleurs[2].g = 0x20; couleurs[2].b = 0x30; couleurs[2].a = 0xff;
    couleurs[3].r = 0xaa; couleurs[3].g = 0xbb; couleurs[3].b = 0xcc; couleurs[3].a = 0xff;
    couleurs[4].r = 0x00; couleurs[4].g = 0x00; couleurs[4].b = 0x00; couleurs[4].a = 0xff;
    couleurs[5].r = 0xff; couleurs[5].g = 0x00; couleurs[5].b = 0x00; couleurs[5].a = 0xff;
    couleurs[6].r = 0x00; couleurs[6].g = 0xff; couleurs[6].b = 0x00; couleurs[6].a = 0xff;
    couleurs[7].r = 0x00; couleurs[7].g = 0x00; couleurs[7].b = 0xff; couleurs[7].a = 0xff;
    couleurs[8].r = 0x7f; couleurs[8].g = 0x7f; couleurs[8].b = 0x7f; couleurs[8].a = 0xff;
    couleurs[9].r = 0xf0; couleurs[9].g = 0x0f; couleurs[9].b = 0xa0; couleurs[9].a = 0xff;

    int i = 0;
    while (i < 10) {
        printf("Couleur %d :\n", i + 1);
        printf("Rouge : %u\n", (unsigned int)couleurs[i].r);
        printf("Vert : %u\n", (unsigned int)couleurs[i].g);
        printf("Bleu : %u\n", (unsigned int)couleurs[i].b);
        printf("Alpha : %u\n\n", (unsigned int)couleurs[i].a);
        i = i + 1;
    }

    return 0;
}
