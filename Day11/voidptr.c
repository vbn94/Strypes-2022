#include <stdio.h>


int main(){
    void  *vp; // universal pointer
    
    int num = 20;
    double pi = 3.14;
    char sym = 'Z';
    vp = &num;
    printf("%p\n", vp);
    printf("%d\n", *(int*)vp);
    vp = &pi;
    printf("%p\n", vp);
    printf("%.2lf\n", *(double*)vp);
    vp = &sym;
    printf("%p\n", vp);
    printf("%c\n", *(char*)vp);
    return 0;
}