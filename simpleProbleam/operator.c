#include<stdio.h>

int main(){

    int numb1, numb2, result;
    char op;
    printf("enter your number and operator and number : ");
    scanf("%d %c %d" , &numb1, &op, &numb2);



    switch(op){
        case '+':
            result = numb1 + numb2;
            printf("%d", result);
            break;
        case '-':
            result = numb1 - numb2;
            printf("%d", result);
            break;
        case '*':
            result = numb1 * numb2;
            printf("%d", result);
            break;
         case '/':
            if(numb1 == 0 || numb2 == 0 ){
                 printf("cannot divided by 0");
                 break;
            }
            else{
                result = numb1 / numb2;
                printf("%d", result);
                break;
            }
        case '%':
            result = numb1 % numb2;
            printf("%d", result);
            break;
        default:
            printf("unknown operator");

    }
    return 0;
}
