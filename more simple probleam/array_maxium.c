#include<stdio.h>


int maxium(int numbers[], int n){
    int maxium = 0;
    for(int i = 0; n > i; i++){
        if(numbers[i] > maxium){
            maxium = numbers[i];
        }
    }
    return maxium;
}

int main() {
    //Write a function that will take an array and find its maximum.
    int x;
    scanf("%d" , &x);
    int numbers[x];

    for(int i = 0; x > i; i++){
        scanf("%d" , &numbers[i]);
    }
    int max_number= maxium(numbers , x);
    printf("%d" , max_number);

    return 0;
}
