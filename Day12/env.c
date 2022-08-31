#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[], char *env[]){
    int i = 0;
    while (env[i] != NULL){
        printf("env[%d] = %s\n", i, env[i]);
        i++;
    }
    printf("I'm, %s\n", getenv("USERNAME"));
    printf("My directory: %s\n", getenv("PWD"));
    printf("My company: %s\n", getenv("COMPANY"));
    return EXIT_SUCCESS;
}