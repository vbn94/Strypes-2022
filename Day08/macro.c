#include <stdio.h>

#define PI 3.141596
#define SUM(a,b) ((a)+(b))
#define MULT(a,b) ((a)*(b))
#define CIRCLE_AREA(r) (PI*(r)*(r))
#define SETBIT(mask,bit) (mask |= (1 << (bit)))
#define FORI(start, stop, step) for(int i = start; i <= stop; i += step)
#define FOR(var, start, stop, step) for(int var = start; var <= stop; var += step)




int main(){
    FOR(j, 0, 20, 2){
        printf("%d ", j);
    }
    putchar('\n');
    /*int num1 = SUM(10,2) * 10;
    printf("Num1 = %d\n", num1);
    int num2 = MULT(10+1,5) - 10;
    printf("Num2 = %d\n", num2);
    printf("CIRCLE_AREA(3) = %.2lf\n", CIRCLE_AREA(3));*/
    return 0;
}