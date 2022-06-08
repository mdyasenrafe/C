#include <stdio.h>

int main() {
    int a;
    int sum;
    scanf("%d", &a);
// reverse the number
    int b = a;
    int c = 0;
    while (b != 0) {
        c = c * 10 + b % 10;
        b = b / 10;
    }
     int d = c;
    int e = 0;
    while (d != 0) {
        e = e * 10 + d % 10;
        d = d / 10;
    }
        printf("%d %d", c  ,e);
    return 0;
}
