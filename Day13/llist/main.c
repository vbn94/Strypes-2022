#include <stdio.h>
#include "llist.h"

int cmp(int a, int b){
    return b - a;
}

int main(void){
    node_t *list1 = NULL;//, *list2 = NULL, *lA = NULL, *lB = NULL;
    pushEnd(&list1, 1);
    pushEnd(&list1, 2);
    pushEnd(&list1, 73);
    pushEnd(&list1, 94);
    pushEnd(&list1, 5);
    pushEnd(&list1, 6);
    print_list(list1);
    putchar('\n');
    mergeSort(&list1, cmp);
    print_list(list1);
    putchar('\n');
    return 0;
}