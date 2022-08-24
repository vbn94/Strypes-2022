#include <stdio.h>
#include <stdlib.h>

#define COUNT 10

int* getNum(){
    //int n = 100;
    int* n = (int*)malloc(sizeof(int));
    printf("n = %p\n", n);
    *n = 100;
    return n;
}

int main(void){
    int* p = getNum();
    printf("p = %p\n", p);
    printf("%d\n", *p);
    free(p);
    return EXIT_SUCCESS;
}