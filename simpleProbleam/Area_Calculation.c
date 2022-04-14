#include <stdio.h>

int main() {
    int a ,b ,h, result , output;
    scanf("%d %d %d" , &a , &b, &h);
    result = (a + b) * h;
    output = result / 2;
    printf("%d" , output);
    return 0;

}

