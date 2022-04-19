#include<stdio.h>

int main() {
    char oper;
    int num1 , num2 , result;
    printf("Please enter you number and operator and number: ");
    scanf("%d %c %d" , num1 , &oper, &num2);

//swicth case method

    switch(oper) {
        case '+':
            result = num1 + num2;
            printf("%d", result);
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
           result = num1 * num2;
            break;
        case '/':
            result = num1 / num2;
            break;
        default:
             printf("Unknown operator");
             break;
    }
printf("%d", result);
    return 0;
}
