#include <stdio.h>
#include <stdint.h>

void increment(int* num){
    (*num)++;
}

void setbit(uint32_t* mask, unsigned bit){
    *mask |= (1 << bit);
}

void clearbit(uint32_t* mask, unsigned bit){
    *mask &= ~(1 << bit);
}

void flipbit(uint32_t* mask, unsigned bit){
    *mask ^= (1 << bit);
}

int checkbit(uint32_t mask, unsigned bit){
    return !!(mask & (1 << bit));
}

void printmask(uint32_t mask){
    for(int i = 31; i >= 0; i--){
        printf("%d", checkbit(mask, i));
    }
    putchar('\n');
}

int main(){
    uint32_t m = 0;
    setbit(&m, 4);
    setbit(&m, 5);
    printmask(m);
    return 0;
}