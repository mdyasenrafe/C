#include<stdio.h>


int main() {
    int x;
    scanf("%d" , &x);
    int arr[x];
    int count;

    for(int i = 0; i<= x; i++){
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i<= x; i++){
        int val =arr[i];
        if(val == 2){
            count++;
        }
    }
    printf("2 number count is => %d" , count);
    return 0;
}
