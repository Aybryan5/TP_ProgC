#include <stdio.h>

int main(void) {
    unsigned int d = 0;

    unsigned int total_bits = (unsigned int)(sizeof(unsigned int) * 8);
    unsigned int bit4_left_mask = 1u << (total_bits - 4);
    unsigned int bit20_left_mask = 1u << (total_bits - 20);

    d = d | bit4_left_mask;
    d = d | bit20_left_mask;

    int bit4_is_one = (d & bit4_left_mask) != 0;
    int bit20_is_one = (d & bit20_left_mask) != 0;

    if (bit4_is_one && bit20_is_one) {
        printf("1\n");
    } else {
        printf("0\n");
    }

    return 0;
}
