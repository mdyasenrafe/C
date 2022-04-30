#include<stdio.h>

int main() {
    int numb1, numb2;
    let result =1;
    scanf("%d %d", &numb1, &numb2);
    for(int i = 1; i <= numb1 && i <= numb2; i++){
        if(numb1 % i == 0 && numb2 % i == 0 ){
            result = i;

        }
    }
    printf("your gcd is %d", result)
    return 0;
}
