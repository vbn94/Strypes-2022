#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>


int main(){
    int8_t num1;
    int16_t num2;
    int32_t num3;   // int
    int64_t num4;
    printf("int8_t %lu B\n", sizeof(num1));
    printf("int16_t %lu B\n", sizeof(num2));
    printf("int32_t %lu B\n", sizeof(num3));
    printf("int64_t %lu B\n", sizeof(num4));
    uint8_t num5;   // char
    uint16_t num6;  // unsigned short
    uint32_t num7;  // unsigned
    uint64_t num8;  // unsigned long 
    printf("uint8_t %lu B\n", sizeof(num5));
    printf("uint16_t %lu B\n", sizeof(num6));
    printf("uint32_t %lu B\n", sizeof(num7));
    printf("uint64_t %lu B\n", sizeof(num8));
    return 0;
}