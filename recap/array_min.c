#include<stdio.h>


int main() {
    int x;
    scanf("%d" , &x);

    int arr[x];
    int min;
    for(int i = 0; i<= x; i++){
        scanf("%d", &arr[i]);
        int val =arr[i];
        if(val < min){
            min = val;
        }
    }
    printf("total min is %d" , min);
    return 0;
}
