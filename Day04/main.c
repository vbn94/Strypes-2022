#include <stdio.h>
#include <stdbool.h>

int main(){
   
    /*char sym = '0'; // 0 != '0', 0 == '\0'
    float pi = 0;
    int a = 10;
    if (20 == a) { // a == 20 <=> 20 == a
        printf("True\n");
    } else {
        printf("False\n");
    }*/

    int num = 10;
    while (num) {
        printf("%d\n", num);
        num--;
    }

    bool isEven = false;
    bool isOdd = true;

    return 0;
}