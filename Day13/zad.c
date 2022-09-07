#include<stdio.h>
#include<string.h>
#include<stdlib.h>


void Add(const char* p1, const char* p2, char* result);

int main(void)
{
    char sum[1000];
    char p1[1000];
    char p2[1000];

    printf("Please Insert number P1: ");
    scanf("%s", p1);

    printf("Please Insert number P2: ");
    scanf("%s", p2);
    
    Add(p1, p2, sum);
    printf("The sum from \"%s\" + \"%s\" = \"%s\"\n", p1, p2, sum);
    
    return 0;
}

void Add(const char* p1, const char* p2, char* result)
{
    int numP1, numP2, sumNum;
    sscanf(p1, "%d", &numP1);
    sscanf(p2, "%d", &numP2);
    sumNum = numP1 + numP2;
    sprintf(result, "%d", sumNum);    
}