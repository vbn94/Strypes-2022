#ifndef _LLIST_H
#define _LLIST_H

#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node* next;
} node_t;

node_t* create_node(int);
size_t listSize(node_t*);
void listFree(node_t**);
void print_list(node_t*);
void print_listR(node_t*);
void print_listRRev(node_t*);
void insertNth(node_t**, int, size_t);
void push(node_t**, int);
void pushEnd(node_t**, int);
void deleteNth(node_t**,size_t);
int getNth(node_t*, size_t);
node_t* copyList(node_t* );
void appendList(node_t** ,node_t**);
void removeDublicates(node_t**);
void mergeSort(node_t**, int(*)(int, int));
void frontBackSplit(node_t*, node_t**, node_t**);
node_t* sortedMerge(node_t*, node_t*, int(*)(int, int)); 
#endif
