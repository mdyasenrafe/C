#include<stdio.h>


int main() {
    int a;
    scanf("%d" , &a);
    long fibonacci[a];
    fibonacci[0] = 0;
    fibonacci[1] =1;
    for(int i = 2; i<a; i++){
        fibonacci[i] = fibonacci[i -1] + fibonacci[i-2];
    }
    for(int i =0; i < a; i++){
        printf("%lld\n" , fibonacci[i]);
    }
    return 0;
}

