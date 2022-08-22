#include <stdio.h>

#define PI 3.141596
#define mydouble double
#define ako if

int main(){
    /*mydouble r = 2;
    double S = PI * r * r;
    double P = 2  * PI * r;
    printf("S = %.2lf, P = %.2lf\n", S, P);
    ako (S > P){
        printf("S > P\n");
    }*/
    printf("%.6lf\n", PI);
    #undef PI
    #define PI 3.14

    PI = 24;

    printf("%.6lf\n", PI);
    return 0;
}