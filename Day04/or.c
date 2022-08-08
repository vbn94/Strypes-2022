#include <stdio.h>
#include <stdbool.h>

int main(){
    int a = 0;
    if ( 1 || ++a || ++a || ++a || ++a){
        printf("True\n");
    } else {
        printf("False\n");
    }
    printf("a = %d\n", a);
    return 0;
}