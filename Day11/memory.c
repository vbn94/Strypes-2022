#include <stdio.h>
#include <stdlib.h>


int f(int x){
    num++;  // side effect
    return 2*x;
}

void printNum(){
    printf("Num = %d\n", num);
    printf("Name = %s\n", name);
}

int main(){
    printf("f(5) = %d\n", f(5));
    num = 3;
    printf("f(5) = %d\n", f(5));
    num = 0;
    printf("f(5) = %d\n", f(5));
    num = -10;
    printf("f(5) = %d\n", f(5));
    return 0;
}