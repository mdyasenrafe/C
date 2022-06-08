#include<stdio.h>


int main() {
    int x;
    scanf("%d" , &x);

    int arr[x];
    for(int i = 0; i<= x; i++){
        scanf("%d", &arr[i]);
    }
     for(int i = x; i>= 0; i--){
        printf("%d" , arr[i]);
    }

    return 0;
}
