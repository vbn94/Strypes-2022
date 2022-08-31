#include <stdio.h>

// char *argv[] == char **argv

int main(int argc, char **argv){
    // argc -> arguments count
    // argv -> arguments vector
    printf("Arguments count: %d\n", argc);
    /*for (int i = 0; i < argc; i++){
        printf("argv[%d] = %s\n", i, argv[i]);
    }*/
    int i = 0;
    while (argv[i]){
        printf("argv[%d] = %s\n", i, argv[i]);
        i++;
    }
    return 0;
}