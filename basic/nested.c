#include <stdio.h>

int main() {
    int number;
    printf("please enter your number : ");
    scanf("%d" , &number);

    if(number > 0){
        printf( "Positive");
    }
    else{
        if(number == 0){
             printf("Zero");
        }
        else{
              printf("Negative");
        }
    }

    return 0;
}
