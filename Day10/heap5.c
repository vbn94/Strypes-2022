#include <stdio.h>
#include <stdlib.h>

#define COUNT 10

int main(void){
    double* nums = malloc(COUNT * sizeof(double));
    if (NULL == nums){
        return EXIT_FAILURE;
    }
    for (int i = 0; i < COUNT; i++){
        nums[i] = i * 10;
    }
    nums = realloc(nums, (COUNT + 10) * sizeof(double)); // 
    if (NULL == nums){
        return EXIT_FAILURE;
    }
    for (int i = 10; i < COUNT + 10; i++){
        nums[i] = i / 10;
    }

    for (int i = 0; i < COUNT + 10; i++){
        printf("%.2lf ", nums[i]);
    }
    putchar('\n');
    free(nums);
    return EXIT_SUCCESS;
}