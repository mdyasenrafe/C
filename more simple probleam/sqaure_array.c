#include<stdio.h>


int makeNArray(int n , int numbers[]){
    for(int i =0; i < n; i++){
        int elements = i+1;
        numbers[i] = elements * elements;
    }
}

int main() {

    int n;
    scanf("%d" , &n);
    int numbers[n];
    makeNArray(n , numbers);

    for(int i = 0; n > i; i++){
        printf("%d " , numbers[i]);
    }
    return 0;
}


