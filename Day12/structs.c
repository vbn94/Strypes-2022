#include <stdio.h>
#include <string.h>

struct Book {
    char title[100];
    char autor[100];
    unsigned pages;
    double price;
};

void bookInfo(struct Book book){
    printf("Title: %s\n", book.title);
    printf("Autor: %s\n", book.autor);
    printf("Pages: %u\n", book.pages);
    printf("Price: %.2lf$\n", book.price);
}

void getBookData(struct Book *book){
    printf("Enter Title: ");
    //scanf("%s", );
    fgets((*book).title, 100, stdin);
    (*book).title[strlen((*book).title)- 1] = '\0';
    printf("Enter Autor: ");
    fgets((*book).autor, 100, stdin);
    (*book).autor[strlen((*book).autor)- 1] = '\0';
    printf("Enter Pages: ");
    scanf("%u", &((*book).pages));
    printf("Enter Price: ");
    scanf("%lf", &((*book).price));
}

int main(){
    int num = 20;
    scanf("%d", &num);
    struct Book b1;
    struct Book b2 = { 
     .title="Zaglavie",
     .autor="Autor name",
     .pages=100,
     .price=30.4 
    };
    strcpy(b1.title, "The C Programming Lang");
    strcpy(b1.autor, "Braian Kerigan");
    b1.price = 20.50;
    b1.pages = 300;
    bookInfo(b1);
    bookInfo(b2);
    struct Book b3;
    getBookData(&b3);
    bookInfo(b3);
    return 0;
}