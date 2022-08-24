#include <stdio.h>
#include <stdlib.h>

#define COUNT 10

int main(void){
    int* nums = malloc(COUNT * sizeof(int));
    if (NULL == nums){
        return EXIT_FAILURE;
    }
    for (int i = 0; i < COUNT; i++){
        nums[i] = 10 * i;
    }
    for (int i = 0; i < COUNT; i++){
        printf("%d ", nums[i]);
    }
    putchar('\n');
    free(nums);
    return EXIT_SUCCESS;
}