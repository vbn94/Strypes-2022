#include <stdio.h>
#include <stdbool.h>

int main(){
    int a = 10;
    printf("%d\n", a++);
    printf("%d\n", a);
    
    a = 10;
    printf("%d\n", ++a);
    printf("%d\n", a);
    return 0;
}