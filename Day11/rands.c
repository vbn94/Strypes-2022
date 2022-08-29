#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randint(int min, int max){ // [min; max]
    return min + rand() % (max - min + 1); 
}

double randreal(double min, double max){
    return min + ((double)rand() / RAND_MAX) * (max - min);
}



int main(){
    srand(time(NULL));
    printf("RAND_MAX = %d\n", RAND_MAX);
    for (int i = 0; i < 10; i++){
        printf("%c\n", randint('a', 'z'));
    }
    return 0;
}