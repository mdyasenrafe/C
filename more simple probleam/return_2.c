#include<stdio.h>
void return_two(int a, int b, int *x, int *y) {
   *x = a / b;
   *y = a % b;
}
main() {
   int a = 76, b = 10;
   int q, r;
   return_two(a, b, &q, &r);
   printf("x is: %d y is: %d\n", q, r);
}
