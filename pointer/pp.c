#include<stdio.h>


int main() {
    int value = 100;
    int* ppn = &value;
    printf("%d\n" , value);
    printf("%p address has value %d\n" , ppn,*ppn);

    value = 200;
    printf("%d\n" , value);
    printf("%p address has value %d\n" , ppn,*ppn);

    *ppn = 300;
    printf("%d\n" , value);
    printf("%p address has value %d\n" , ppn,*ppn);

    int value2 = 400;
    ppn = &value2;

    printf("%d\n" , value2);
    printf("%p address has value %d\n" , ppn,*ppn);


    return 0;
}
