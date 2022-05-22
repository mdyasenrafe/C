#include <stdio.h>

void printName(char name[]){
    printf("hello %s" , name);
}

void printNumber(int number){
    int sum =0;
    for(int i =0; i <= number; i++){
        sum += i;
    }
    printf("Your Total output is : %d" , sum );
}

int main() {
    printName("karim");
    int number;
    printf("enter your number : ");
    scanf("%d", &number);
    printNumber(number);
    return 0;
}
