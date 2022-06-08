#include<stdio.h>


int main() {
    int x;
    int sum;
    scanf("%d" , &x);

    int arr[x];
    for(int i = 0; i<= x; i++){
        scanf("%d", &arr[i]);
        int val =arr[i];
        sum = val + sum;
    }
