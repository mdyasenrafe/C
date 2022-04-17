#include<stdio.h>

int main(){
    int a = 9, b= 9, comp =1;

    if(a< b){
        printf("a < b\n");
    }
    else{
        printf("a > b\n");
    }
    if(a == b){
        printf("a==b\n");
    }
    else{
        printf("a!=b\n");
    }

    if(comp){
        printf("Comp is true");
    }else{
         printf("Comp is false");
    }
    return 0;
}
