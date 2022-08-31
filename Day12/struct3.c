#include <stdio.h>
#include <string.h>


typedef unsigned long liters;

/*
struct Book {
    char title[100]; // 100 B
    char autor[100]; // 100 B
    unsigned pages;  // 4 B
    double price;    // 8 B 
     // 212 Bytes
};

typedef struct Book book_t; */


typedef struct {
    char title[100]; // 100 B
    char autor[100]; // 100 B
    unsigned pages;  // 4 B
    double price;    // 8 B 
     // 212 Bytes
} book_t;


void bookInfo(book_t book){
    printf("Title: %s\n", book.title);
    printf("Autor: %s\n", book.autor);
    printf("Pages: %u\n", book.pages);
    printf("Price: %.2lf$\n", book.price);
}

int main(){
    liters myBottle;
    
    book_t b1;
    printf("%lu\n", sizeof(b1));
    book_t *p = &b1;
    printf("%lu\n", sizeof(p));
    
    /* strcpy((*p).autor, "Ivan");
    strcpy((*p).title, "Kniga");
    (*p).price = 20.34;
    (*p).pages = 300;*/
    strcpy(p->autor, "Ivan");
    strcpy(p->title, "Kniga");
    p->price = 20.34;
    p->pages = 300;
    bookInfo(b1);
    return 0;
}