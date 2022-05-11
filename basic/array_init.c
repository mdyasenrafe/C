#include <stdio.h>

int main() {
    const int n = 10;
    int values[n];
    int length[5];
    int a = {0, 2, 1, 4, 3};
   a[a[1]+1];
    //find array length
    //int count = sizeof(a)/sizeof(a[0]);
    printf("%d", a[0]);
    for (int i =0; i <n; i++){
        values[i] = i +1;
    }
    //printf("%d" , values[1]);

    return 0;
}
