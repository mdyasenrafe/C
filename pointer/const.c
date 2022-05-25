#include<stdio.h>


int main() {
    const int N = 10;
    const int *pN = &N;


    printf("%p has value %d\n", pN, *pN);
    int M =100;
    pN = &M;
    printf("%p has value %d\n", pN, *pN);
    return 0;
}
