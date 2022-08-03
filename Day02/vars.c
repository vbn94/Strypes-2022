#include <stdio.h>

int main(){
    int num1; // цели числа
    short num2; // цели числа
    long num3; // цели числа
    long long num4;
    char sym; // символ, цяло число
    /*sym = 'a';
    printf("%d\n", sym);
    printf("%c\n", sym);
    short mysym = 't';
    printf("%d\n", mysym);
    printf("%c\n", mysym);*/
    printf("1 Byte = %d bits\n", __CHAR_BIT__);
    printf("char: %lu Bytes\n", sizeof(char));
    printf("short: %lu Bytes\n", sizeof(short));
    printf("int: %lu Bytes\n", sizeof(int));
    printf("long: %lu Bytes\n", sizeof(long));
    printf("long long: %lu Bytes\n", sizeof(long long));
    printf("var num3: %lu Bytes\n", sizeof(num3));

    unsigned num5;  // unsigned == unsigned int
    unsigned short num6;
    unsigned long num7;
    unsigned long long num8;

    unsigned int num9 = -11;
    printf("%u\n", num9);

    return 0;
}