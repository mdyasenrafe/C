#include<stdio.h>


int main() {
    int x;
    int max = 0;
    scanf("%d" , &x);

    int arr[x];
    for(int i = 0; i<= x; i++){
        scanf("%d", &arr[i]);
        int val =arr[i];
        if(val > max){
            max = val;
        }
    }
    printf("total max is %d" , max);
    return 0;
}
