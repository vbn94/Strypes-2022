#include <stdio.h>
#include <stdint.h>

int main(){
    uint16_t num = 42; // 16 bits = 2 Bytes
    uint16_t *p = &num;
    printf("%llu\n", (unsigned long long)p);
    p++;
    printf("%llu\n", (unsigned long long)p);
    return 0;
}