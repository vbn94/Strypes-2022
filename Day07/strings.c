#include <stdio.h>

int main(){
    char text1[] = { 'S', 't', 'r', 'y', 'p', 'e', 's', '\0' };
    char text2[] = { 'C', ' ', 'l', 'a', 'n', 'g', '0', '1', '2', '\0' };
    printf("%s\n", text1);
    printf("%s\n", text2);
    printf("%p\n", text1);
    printf("%p\n", text2);
    printf("%c\n", *(text1 + 3));
    printf("%s\n", text1 + 2);
    char text3[] =  { 'S', 't', 'r', 'y', 'p', 'e', 's', ' ', 'i', 's', ' ', 's', 'u', 'p', '\0', 'e', 'r', '\0' };
    
    char text4[] = "Hello!"; // 
    printf("%s\n", text4);
    return 0;
}