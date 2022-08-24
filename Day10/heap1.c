#include <stdio.h>
#include <stdlib.h>

int main(void){
    int* num = malloc(sizeof(int));
    if (NULL == num){
        return EXIT_FAILURE;
    }
    printf("Heap address: %p\n", num);
    *num = 56;
    printf("num = %d\n", *num);
    free(num);
    return EXIT_SUCCESS;
}