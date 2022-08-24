#include <stdio.h>
#include <stdlib.h>

int main(void){
    int* nums = malloc(2 * sizeof(int));
    if (NULL == nums){
        return EXIT_FAILURE;
    }
    *nums = 10;   // nums[0] = 10
    *(nums + 1) = 20; // nums[1] = 20
    printf("number 1: %d\nnumber 2: %d\n", *nums, *(nums + 1) );
    free(nums);
    return EXIT_SUCCESS;
}