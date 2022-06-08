#include<stdio.h>

//problem c.

int main(){
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);

    if(a < b){
        if(a <= c && c < b){
            printf("Yes");
        }else{
            printf("No");
        }
    }
    else if(a > b){
        if(a <= c && c <= 24){
            printf("Yes");
        }else if(0 <= c && c < b){
            printf("Yes");
        }else{
            printf("No");
        }
    }else{
        printf("No");
    }
    return 0;
}