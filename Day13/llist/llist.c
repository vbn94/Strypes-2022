#include "llist.h"

// list basics

void print_list(node_t* list){
    node_t* current = list;
    while (current){
        printf("%d ", current->data);
        current = current->next;
    }
    putchar('\n');
}


void print_listR(node_t* list){
    if (list == NULL){
        return;
    }
    printf("%d ", list->data);
    print_listR(list->next);
}

void print_listRRev(node_t* list){
    if (list == NULL){
        return;
    }
    print_listRRev(list->next);
    printf("%d ", list->data);
}

node_t* create_node(int data){
    node_t* node = malloc(sizeof(node_t));
    node->data = data;
    node->next = NULL;
    return node;
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

void insertNth(node_t** list, int data, size_t n){
    node_t* node = create_node(data);
    if (n == 0 || *list == NULL){
        //node->next = *list;
        *list = node;
        return;
    }
    node_t* current = *list;
    node_t* prev = current;
    // n steps
    while (current != NULL && n--){
        prev = current;
        current = current->next;
    }
    prev->next = node;
    node->next = current;
}

void push(node_t** list, int data){
    node_t* n = malloc(sizeof(node_t));
    n->data = data;
    n->next = *list;
    *list = n;
}

void pushEnd(node_t** list, int data){
    node_t* n = malloc(sizeof(node_t));
    n->data = data;
    n->next = NULL;
    if (*list == NULL){
        *list = n;
        return;
    }
    node_t* current = *list;
    while (current->next != NULL){
        current = current->next;
    }
    current->next = n;
}

size_t listSize(node_t* list){
    size_t cnt = 0;
    node_t* current = list;
    while (current){
        cnt++;
        current = current->next;
    }
    return cnt++;
}

int getNth(node_t* head, size_t n){
    node_t* current = head;
    while (n--){
        current = current->next;
    }
    return current->data;
}

void deleteNth(node_t** list, size_t n){
    if (*list == NULL){
        return;
    }
    if (n == 0){
        node_t* temp = *list;
        *list = (*list)->next;
        free(temp);
        return;
    }
    node_t* current = *list;
    node_t* prev = current;
    while (current && n--) {
        prev = current;
        current = current->next;
    }
    prev->next = current->next;
    free(current);
}

node_t* copyList(node_t* list){
    if (list == NULL){
        return NULL;
    }
    node_t* n = malloc(sizeof(node_t));
    n->data = list->data;
    n->next = copyList(list->next);
    return n;
}

void appendList(node_t** listA, node_t** listB){
    node_t* tailA = *listA;
    if (tailA){
        while (tailA->next != NULL) 
            tailA = tailA->next;
    }
    tailA->next = *listB;
    //tailA->next = copyList(*listB);
    listFree(listB);
}

void removeDublicates(node_t** list){
    node_t *current = *list, *next;
    if (current == NULL){
        return;
    }
    while (current->next != NULL){
        if (current->data == current->next->data){
            next = current->next->next;
            free(current->next);
            current->next = next;
        } else {
            current = current->next;
        }
    }
}

// merge sort
node_t* sortedMerge(node_t* listA, node_t* listB, int(*cmp)(int, int)){
    node_t* sorted = NULL;
    if (listA == NULL){
        return listB;
    }
    if (listB == NULL){
        return listA;
    }
    if (cmp(listA->data, listB->data) > 0){
        sorted = listA;
        sorted->next = sortedMerge(listA->next, listB, cmp);
    } else {
        sorted = listB;
        sorted->next = sortedMerge(listA, listB->next, cmp);
    }
    return sorted;
}


void frontBackSplit(node_t* list, node_t** front, node_t** back){
    node_t* slow = list;
    node_t* fast = list->next;
    while (fast != NULL){
        fast = fast->next;
        if (fast  != NULL){
            slow = slow->next;
            fast = fast->next;
        }
    }
    *front = list;
    *back = slow->next;
    slow->next = NULL;
}

void mergeSort(node_t** list, int(*cmp)(int, int)){
    if (*list == NULL || (*list)->next == NULL){
        return;
    }
    node_t *front = NULL, *back = NULL;
    frontBackSplit(*list, &front, &back);
    mergeSort(&front, cmp);
    mergeSort(&back, cmp);
    *list = sortedMerge(front, back, cmp);
}
