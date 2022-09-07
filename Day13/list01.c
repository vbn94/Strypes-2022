#include <stdio.h>


typedef struct node {
    int data;
    struct node* next;
} node_t;

/* struct node {
    int data;
    struct node* next;
};
typedef struct node node_t; */

int main(){
    node_t n1;
    node_t n2;
    node_t n3;
    n1.data = 10;
    n2.data = 20;
    n3.data = 30;
    n1.next = &n2;
    n2.next = &n3;
    n3.next = NULL;
    printf("%d\n", (*(n1.next)).data);
    return 0;
}