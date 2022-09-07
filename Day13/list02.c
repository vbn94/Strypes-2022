#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node* next;
} node_t;


void push(node_t** head, int value){
    node_t* newNode = malloc(sizeof(node_t));
    newNode->data = value; //(*newNode).data
    newNode->next = *head;
    *head = newNode;
}

void printList(node_t* head){
    node_t* current = head;
    while (current != NULL){
        printf("%d\n", current->data);
        current = current->next;
    }
}

void listFree(node_t** list){
    node_t *current = *list, *prev;
    while (current){
        prev = current;
        current = current->next;
        free(prev);
    }
    *list = NULL;
}

int sum(int a, int b){
    return a + b;
}

struct math_t {
    int (*op) (int, int);
} ;

int main(){
    /*struct math_t m;
    m.op = sum;

    printf("%d\n", m.op(10, 20));*/
    node_t* head = NULL;
    push(&head, 10);
    push(&head, 20);
    push(&head, 30);
    push(&head, 40);
    printList(head);
    listFree(&head); // head = NULL;
    if (NULL == head){
        printf("List is empty!\n");
    }
    return 0;
}