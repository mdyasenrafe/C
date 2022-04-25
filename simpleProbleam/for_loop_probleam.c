#include <stdio.h>

int main() {
    int a , result = 0;

    scanf("%d" , &a);
    for(int i =1; i <= a; i++){
        int b =0;
        scanf("%d" , &b);
        if(b <0){
            result = result + 1;
        }
    }
    printf("%d\n" , result);
    return 0;

}
