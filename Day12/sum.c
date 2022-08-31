#include <stdio.h>


int main(int argc, char **argv){
    int sum = 0, num;
    for (int i = 1; i < argc; i++){
        // sum += atoi(argv[i]);
        sscanf(argv[i], "%d", &num);
        sum += num;
    }
    printf("Sum = %d\n", sum);
    return 0;
}