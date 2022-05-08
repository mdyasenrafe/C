#include <stdio.h>

int main() {
    int a;
    int sum;
    scanf("%d", &a);
    // reverse the three order of digits and add them and sum them
    int x = a%10;
    int y = (a/10)%10;
    int z = (a/100)%10;
    sum = x+y+z;
    printf("%d", sum);
    return 0;
}
