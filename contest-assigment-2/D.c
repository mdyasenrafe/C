#include <stdio.h>

int main() {
    int a;
    scanf("%d" , &a);
    int countA =0;
    int countD = 0;
    for(int i = 1; i <= a; i++){
        char b;
        scanf(" %c",&b);
        if(b == 'A'){
            countA++;
        }
        else if (b == 'D'){
            countD++;
        }
    }

        if(countA == countD){
            printf("Friendship");
        }
        else if(countD >countA){
             printf("Danik");
        }
        else{
             printf("Anton");
        }
    return 0;

}
