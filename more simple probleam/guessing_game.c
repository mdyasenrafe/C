#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main() {
    srand(time(0));
    int value =rand() % 100 +1;

    int checking = 0;
    while(checking < 10){
            int guess;
            printf("enter your guess number : ");
            scanf("%d", &guess);
        if(value == guess){
            printf("correct value\n");
            break;
        }
        else if (guess < value){
            printf("need larger vlaue\n");
        }
        else {
             printf("need smaller vlaue\n");
        }
        checking++;
        if(checking == 10){
            printf("Sorry we can't go next step.\n");
        }

    }

    return 0;
}
