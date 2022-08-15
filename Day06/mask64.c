#include <stdio.h>
#include <stdint.h>


// declarations
void setbit(uint64_t* mask, unsigned bit);
void clearbit(uint64_t* mask, unsigned bit);
void flipbit(uint64_t* mask, unsigned bit);
int checkbit(uint64_t mask, unsigned bit);
void printmask(uint64_t mask);

int main(){
    4.23; // double
    4.23F; // float
    42; // int
    42U; // unsinged
    42L; // long
    42LL; // long long
    42ULL; // unsigned long long
    (1ULL << 40);

    uint64_t m = 0;
    //setbit(&m, 2);
    setbit(&m, 4);
    setbit(&m, 5);
    setbit(&m, 63);
    printmask(m);
    
    return 0;
}

// definitions
void setbit(uint64_t* mask, unsigned bit){
    *mask |= (1ULL << bit);
}

void clearbit(uint64_t* mask, unsigned bit){
    *mask &= ~(1ULL << bit);
}

void flipbit(uint64_t* mask, unsigned bit){
    *mask ^= (1ULL << bit);
}

int checkbit(uint64_t mask, unsigned bit){
    return !!(mask & (1ULL << bit));
}

void printmask(uint64_t mask){
    for(int i = 63; i >= 0; i--){
        printf("%d", checkbit(mask, i));
    }
    putchar('\n');
}