#include<stdio.h>

int main() {
    int a, b,c;
    scanf("%d %d %d" , &a, &b,&c);
    int output1 = a + b;
    int output2 = a + c;
    int output3 = c + b;

    if(output1 <= output2 && output1 <= output3){
        printf("%d" , output1);
    }
     else{
    if(output2 <= output3 && output2 <= output1){
            printf("%d" , output2);
        }
    if(output3 <= output2 && output3 <= output2){
        printf("%d" , output3);
    }
     }

    return 0;
}
