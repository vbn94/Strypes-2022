#include <stdio.h>
#include <string.h>

// #pragma pack(1)

struct Book {
    char title[100]; // 100 B
    char autor[100]; // 100 B
    unsigned pages;  // 4 B
    double price;    // 8 B 
     // 212 Bytes
};

void bookInfo(struct Book book){
    printf("Title: %s\n", book.title);
    printf("Autor: %s\n", book.autor);
    printf("Pages: %u\n", book.pages);
    printf("Price: %.2lf$\n", book.price);
}

int main(){
    struct Book b1;
    printf("%lu\n", sizeof(b1));
    struct Book *p = &b1;
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