#include<stdio.h>

int main() {
    char text;
    printf("Please enter you charcter : ");
    scanf("%c" , &text);

    if(text == 'a' || text == 'e' || text == 'i' || text == 'o' || text == 'u'){
        printf("vowel");
    }
    else{
        printf("consonant");
    }
//swicth case method

    switch (text) {
        case 'a':
            printf("Vowel");
            break;
        case 'e':
            printf("Vowel");
            break;
        case 'i':
            printf("Vowel");
            break;
        case 'o':
            printf("Vowel");
            break;
        case 'u':
            printf("Vowel");
            break;
        default:
             printf("Constant");
             break;
    }

    return 0;
}


