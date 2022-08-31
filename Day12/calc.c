#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){
    if (argc < 3){
        fprintf(stderr, "Not enough arguments!\n");
        return EXIT_FAILURE;
    }
    if (!strcmp(argv[1], "-m")){
        // min
        double min, num;
        sscanf(argv[2], "%lf", &min);
        for (int i = 3; i < argc; i++){
            sscanf(argv[i], "%lf", &num);
            min = (num < min) ? num : min;
        }
        printf("Min = %.2f\n", min);
    } else if (!strcmp(argv[1], "-M")){
        // max
        double max, num;
        sscanf(argv[2], "%lf", &max);
        for (int i = 3; i < argc; i++){
            sscanf(argv[i], "%lf", &num);
            max = (num > max) ? num : max;
        }
        printf("Max = %.2f\n", max);
    } else if (!strcmp(argv[1], "-s")) {
        // min
        double sum = 0, num;
        for (int i = 2; i < argc; i++){
            sscanf(argv[i], "%lf", &num);
            sum += num;
        }
        printf("Sum = %.2f\n", sum);

    } else if (!strcmp(argv[1], "-a")) {
        // avg
        double sum = 0, num;
        for (int i = 2; i < argc; i++){
            sscanf(argv[i], "%lf", &num);
            sum += num;
        }
        printf("Sum = %.2f\n", sum / (argc - 2));
    } else {
        fprintf(stderr, "Invalid option!\n");
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}