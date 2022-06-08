#include<stdio.h>


void rotate_numbers_func(int numbers[], int n){
    int first = numbers[0];
    for(int i =0 ; i <n; i++){
        numbers[i] = numbers[i + 1];
    }
    numbers[n -1] = first;

}

void rotate_numbers_k_func(int numbers[], int n , int k){
   for(int i = 0; i <k; i++){
        rotate_numbers_func(numbers , n);
   }

}

int main() {
    //Write a function which will right rotate an array by k. For example, array a has the values {1, 2, 3, 4, 5}.
    //If we call Rotate(a). Array a will have the values {2, 3, 4, 5, 1}.
    int n;
    scanf("%d" , &n);
    int numbers[n];

    for(int i = 0; n > i; i++){
        scanf("%d" , &numbers[i]);
    }
    int k;
    scanf("%d" , &k);
     rotate_numbers_k_func(numbers , n , k);

    for(int i = 0; n > i; i++){
        printf("%d " , numbers[i]);
    }
    return 0;
}
