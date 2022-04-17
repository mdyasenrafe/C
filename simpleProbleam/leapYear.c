#include<stdio.h>
#include<stdbool.h>

int main() {
    int year;
    printf("please enter your years : ");
    scanf("%d" , &year);
    if(year % 400 == 0 || year % 100 != 0){
        printf("Leap year\n");
    }
    else{
        printf("Not a leap year\n");
    }
//another method
    bool isLeapYear = year % 400 == 0 || year % 100 != 0;

    if(isLeapYear){
      printf("Leap year");
    }
    else{
        printf("Not a leap year");
    }


    return 0;
}
