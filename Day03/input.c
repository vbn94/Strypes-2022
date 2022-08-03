#include <stdio.h>

int main(){
    int num1;
    int num2;
    char operation;
    /*scanf("%d", &num1);
    scanf("%d", &num2);*/
    int n = scanf("%d %c %d", &num1, &operation, &num2);
    if (operation == '+'){
        printf("%d\n", num1 + num2);
    } else if (operation == '-'){
        printf("%d\n", num1 - num2);
    } else if (operation == '*'){
        printf("%d\n", num1 * num2);
    } else if (operation == '/'){
        printf("%d\n", num1 / num2);
    }
    int m = printf("n = %d\n", n);
    printf("m = %d\n", m);
    return 0;
}