#include <stdio.h>
#include <stdint.h>

int main(){
    int nums[5];
    for (int i = 0; i < 5; i++){
        scanf("%d", nums + i);
    }
    for (int i = 0; i < 5; i++){
        printf("%d ", *(nums + i));
    }
    putchar('\n');
    for (int i = 0; i < 5; i++){
        printf("%d ", nums[i]);
    }
    putchar('\n');
    for (int i = 0; i < 5; i++){
        printf("%d ", i[nums]);
    }
    putchar('\n');
    return 0;
}