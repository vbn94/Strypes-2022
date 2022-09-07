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



size_t listSize(node_t* head){
    size_t count = 0;
    while (head){
        count++;
        head = head->next;
    }
    return count;
}

double average(node_t* head){
    int sum = 0;
    unsigned cnt = 0;
    node_t *current = head;
    while (current){
        cnt++;
        sum += current->data;
        current = current->next;
    }
    //return (double)sum / listSize(head);
    return (double)sum / cnt;
}

void removeFirst(node_t** head){
    node_t* temp = *head;
    *head = (*head)->next;
    free(temp);
}

void listFree2(node_t** head){
    while (){
        
    }
}

int main(){
    /*struct math_t m;
    m.op = sum;

    printf("%d\n", m.op(10, 20));*/
    node_t* head = NULL;
    push(&head, 11);
    push(&head, 20);
    push(&head, 30);
    push(&head, 40);
    removeFirst(&head);
    printf("List size: %lu\n", listSize(head));
    printf("Average: %.2lf\n", average(head));
    printList(head);
    listFree(&head); // head = NULL;
    if (NULL == head){
        printf("List is empty!\n");
    }
    return 0;
}