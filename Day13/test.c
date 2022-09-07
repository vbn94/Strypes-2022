#include <stdio.h>
#include <stdlib.h>

int f1(){
    int m = 25;
    for (int j = 0; j < 4; j++){
        m += 2;
    }
    return m;
}

int main(){
    int a = 10;
    int b = 20;
    a++;
    b = a + 10;
    b = f1();
    for (int i = 0; i < 10; i++){
        printf("%d\n", a);
        a += b;
    }
    return 0;
}