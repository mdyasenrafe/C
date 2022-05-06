#include<stdio.h>


int main(){
    int x,y;
    scanf("%d %d", &x, &y);

    for(int i = 1; i <= x; i++){
        if(i % 4 == 0){
            for(int j = 1; j <= y; j++){
                if(j == 1){
                    printf("#");
                }
                else{
                    printf(".");
                }
            }
        }
        else if(i % 2 != 0){
            for(int j = 1; j <= y; j++){
                printf("#");
            }
        }
        else{
            for(int j = 1; j <= y; j++){
                if(j == y){
                    printf("#");
                }
                else{
                    printf(".");
                }
            }
        }
        printf("\n");
    }
    return 0;
}
