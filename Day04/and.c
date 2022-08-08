#include <stdio.h>
#include <stdbool.h>

int main(){
    /*int a = 1;
    int b = 2;
    int c = 3;
    if ((a = 10) && (b = 0) && (c = 30)){
        printf("True\n");
    } else {
        printf("False\n");
    }
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);
    /*if (1 && 'Z' && 234 && -1  && 'v' && 0.1){
        printf("True\n");
    } else {
        printf("False\n");
    }*/

    int a = 3;
    /*if (--a && --a && --a && --a && --a && --a && --a){
        printf("True\n");
    } else {
        printf("False\n");
    }*/
    if (a-- && a-- && a-- && a-- && a-- && a-- && a--){
        printf("True\n");
    } else {
        printf("False\n");
    }
    printf("%d\n", a);
    return 0;
}