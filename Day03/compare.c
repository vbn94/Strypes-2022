#include <stdio.h>
#include <math.h>

#define EPS 0.001

int main(){
    float num1 = 0.0f;
    float num2 = 10300.0f;
    for (int i = 0; i < 1000; i++){
        num1 += 10.3f;
    }
    printf("num1 = %.5f\nnum2 = %.5f\n", num1, num2);
    /*if (num1 == num2){
        printf("Equals!\n");
    } else {
        printf("Not equals!\n");
    }*/
    /*if (fabs(num1 - num2) < EPS){
        printf("Equals!\n");
    } else {
        printf("Not equals!\n");
    } */
    if (fabs(num1 - num2) < __DBL_EPSILON__ * fmax(num1, num2)){
        printf("Equals!\n");
    } else {
        printf("Not equals!\n");
    }
    return 0;
}