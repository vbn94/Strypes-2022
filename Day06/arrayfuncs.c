#include <stdio.h>
#include <stdint.h>

int sumArray(int array[], int len);
int minArray(int array[], int len);
int maxArray(int* array, int len);
void arrInfo(int array[], int len, int* sum, int* min, int* max);

int main(){
    int nums[] = { 10, -23, 45, 6, 7, 5, 10 };
    int n = sizeof(nums) / sizeof(*nums);
    /*printf("Sum = %d\n", sumArray(nums, n));
    printf("Sum = %d\n", sumArray(nums + 1, 4));
    printf("Min = %d\n", minArray(nums, n));
    printf("Max = %d\n", maxArray(nums, n));*/
    int sum, max, min;
    arrInfo(nums, n, &sum, &min, &max);
    printf("Sum = %d, Min = %d, Max = %d\n", sum, min, max);
    return 0;
}

int sumArray(int array[], int len){
    int sum = 0;
    for (int i = 0; i < len; i++){
        sum += array[i];
    }
    return sum;
}

int minArray(int array[], int len){
    int min = array[0];
    for (int i = 1; i < len; i++){
        if (array[i] < min){
            min = array[i];
        }
    }
    return min;
}

int maxArray(int* array, int len){
    int max = array[0];
    for (int i = 1; i < len; i++){
        if (array[i] > max){
            max = array[i];
        }
    }
    return max;
}

void arrInfo(int array[], int len, int* sum, int* min, int* max){
    int s = 0, m = array[0], M = array[0];
    for (int i = 0; i < len; i++){
        s += array[i];
        if (array[i] > M){
            M = array[i];
        }
        if (array[i] < m){
            m = array[i];
        }
    }
    *sum = s;
    *min = m;
    *max = M;
}
