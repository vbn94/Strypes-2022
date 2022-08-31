#include <stdio.h>
#include <string.h>

int sum(int a, int b){
    return a + b;
}

int sub(int a, int b){
    return a - b;
}

int mult(int a, int b){
    return a * b;
}


int doubleMe(int n){
    return 2 * n;
}

int inc(int n){
    return n + 1;
}

int mult10(int n){
    return n * 10;
}

void printNum(int num, int (*f)(int)){
    printf("%d\n", f(num));
}

int main(){
    printNum(15, doubleMe);
    printNum(15, inc);
    printNum(15, mult10);
   /* int (*fp) (int, int);
    fp = sum;
    printf("%d\n", fp(10, 20));
    fp = sub;
    printf("%d\n", fp(10, 20));
    fp = mult;
    printf("%d\n", fp(10, 20));
    printf("%lu\n", sizeof(fp));*/
    return 0;
}