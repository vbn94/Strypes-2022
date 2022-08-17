#include <stdio.h>

size_t mystrlen(char *str){
    size_t count = 0UL;
    while (*(str + count)){
        count++;
    }
    return count;
}

int main(){
    char name[] = "Ivan\n\n\n\n 123\\";
    int i = 0;
    while (*(name + i)){
        putchar(*(name + i));
        i++;
    }
    putchar('\n');
   
    printf("Count: %lu\n", mystrlen(name));
    char str1[] = "hgfujgifdjgdfogdfgkidfgkffgkdgdfg";
    printf("Count: %lu\n", mystrlen(str1));

    for (int i = 0; i < mystrlen(str1); i++){
        putchar(str1[i]);
    }
    putchar('\n');


    char *str2 = "Hello"; // read only string
    // str2[0] = 'h';
    printf("%s\n", str2) ;
    return 0;
}