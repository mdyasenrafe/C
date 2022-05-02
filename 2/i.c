#include<stdio.h>

int main() {
    int a;
    scanf("%d" , &a);
    int total =0;
    if(a >= 0 && a < 40){
        total =  40 - a;
        printf("%d" , total);
    }
    else if(a >= 40 && a < 70){
        total =  70 - a;
        printf("%d" , total);
    }
     else if(a >= 70 && a < 90){
        total =  90 - a;
        printf("%d" , total);
    }
    else if(a >= 90 && a <= 100){
        printf("expert");
    }
    return 0;
}
