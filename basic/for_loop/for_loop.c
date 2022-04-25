#include<stdio.h>

int main() {
    int result = 0;
    int result1 = 1;

     for(int i= 1; i<= 29; i++){
        if(i % 2 != 0){
            result1 += i;
        }
    }
    printf("%d" , result1);
    return 0;
}




