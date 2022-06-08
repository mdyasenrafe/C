#include<stdio.h>


double square_number(double number){
     return (number*number);;
}

int main() {
    //Write a function which will right rotate an array by k. For example, array a has the values {1, 2, 3, 4, 5}.
    //If we call Rotate(a). Array a will have the values {2, 3, 4, 5, 1}.
    double number;
    scanf("%lf" , &number);
    double output = square_number(number);
    printf("%lf" , output);
    return 0;
}


