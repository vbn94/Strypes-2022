#include <stdio.h>

int main(){
    int num;
    scanf("%d", &num);         // stdin
    printf("Num = %d (stdout)\n", num); // stdout
    fprintf(stderr, "Num = %d (stderr)\n", num);
    return 0;
}