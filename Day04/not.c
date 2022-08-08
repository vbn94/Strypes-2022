#include <stdio.h>
#include <stdbool.h>

int main(){
    int a = -3455;
    if (!a) {
        printf("True\n");
    } else {
        printf("False\n");
    }
    printf("%d\n", !!a);
    return 0;
}