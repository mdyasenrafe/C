#include<stdio.h>

int main() {

    int numbers =0;
    scanf("%d" , &numbers);
    int reversed = 0;
    while(numbers > 0){
        int digit = numbers%10;
        numbers/= 10;
        reversed = reversed * 10 + digit;
        printf("your digit number %d\n" , digit);
    }
    printf("your reversed keyword %d\n" , reversed);
    return 0;
}
