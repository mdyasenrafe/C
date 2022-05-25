#include<stdio.h>

void makeDouble(int* a){
    *a *=2;
}

void swap(int* x, int* y){
    int temp = *x;
    *x = *y;
    *y =temp;
}


int main() {
    int x = 10, y =20;
    swap(&x , &y);
    printf("x = %d , y =%d", x , y);
    return 0;
}
