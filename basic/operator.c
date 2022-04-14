#include <stdio.h>

int main() {
    int firstNumber , secondNumber , sum,sub, multiplication , div;

    printf("Enter your first and second number : ");
    scanf("%d %d" , &firstNumber , &secondNumber);
    sum = firstNumber + secondNumber;
    sub = firstNumber - secondNumber;
    multiplication = firstNumber * secondNumber;
    div = firstNumber / secondNumber;
    printf("total Sum = %d\n" , sum);
    printf("total sub = %d\n" , sub);
    printf("total multipication = %d\n" , multiplication);
    printf("total division = %d\n" , div);
    return 0;

}
