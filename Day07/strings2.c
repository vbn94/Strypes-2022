#include <stdio.h>
#include <string.h>


size_t mystrlen(char *str){
    size_t count = 0UL;
    while (*(str + count)){
        count++;
    }
    return count;
}

int main(){
    /*char name1[20] = "Ivan";
    char name2[10];
    for (int i = 0; i < mystrlen(name1); i++){
        name2[i] = name1[i];
    }
    name2[mystrlen(name1)] = '\0';
    printf("%lu\n", strlen(name1));
    strcpy(name2, name1);  // name2 = name1


    strcpy(name1, "Ivan");
    strcpy(name2, "Ivanov");
    strcat(name1, " ");
    strcat(name1, name2);  // name1 += name2
    strcat(name1, "\n");  
    printf("%s\n", name1); */

    char str1[] = "aaaxxxxx";
    char str2[] = "aaazzz";
   // printf("%d\n", strcmp(str1, str2));
    if (!strncmp(str1, str2, 5)){
        printf("Equals\n");
    } else {
        printf("Not equals\n");
    }
    char str3[] = "Strypes";
    printf("%lu\n", strlen(str3 + 2));
    return 0;
}