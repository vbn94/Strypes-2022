#include <stdio.h>
#include <stdint.h>


int main(){
    int bit;
    uint16_t mask = 0;
    for (int bit = 15; bit >= 0; bit--){
        printf("%d", !!(mask & (1 << bit)));
    }
    putchar('\n');
    bit = 12;
    mask |= (1 << bit);
    bit = 0;
    mask |= (1 << bit);
    bit = 3;
    mask |= (1 << bit);
    bit = 5;
    mask |= (1 << bit);
    bit = 10;
    mask |= (1 << bit);
    bit = 4;
    mask |= (1 << bit);
    for (int bit = 15; bit >= 0; bit--){
        printf("%d", !!(mask & (1 << bit)));
    }
    putchar('\n');
    bit = 4;
    mask &= ~(1 << bit);   // clear
    bit = 12;
    mask &= ~(1 << bit);   // clear
    for (int bit = 15; bit >= 0; bit--){
        printf("%d", !!(mask & (1 << bit)));
    }
    putchar('\n');
    bit = 2;
    mask ^= (1 << bit);
    bit = 15;
    mask ^= (1 << bit);
    bit = 0;
    mask ^= (1 << bit);
    for (int bit = 15; bit >= 0; bit--){
        printf("%d", !!(mask & (1 << bit)));
    }
    putchar('\n');
    return 0;
}