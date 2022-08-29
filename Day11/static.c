#include <stdio.h>
#include "max.h"

static int num = 20; // can be accessed only in this file

static void counter(){   // can be accessed only in this file
    static int cnt;  // BSS
    cnt++;
    printf("%d\n", cnt);
}

int main(){
    max(3, 4);
    counter();
    counter();
    counter();
    counter();
    counter();
    counter();
    return 0;
}