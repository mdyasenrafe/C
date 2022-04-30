#include<stdio.h>

int main() {

    int money =0;
    int target = 100;
    while(money <= target){
        printf("Need Money Please Give Money : ");
        int given;
        scanf("%d" , &given);
        money += given;
        printf(" your current money =%d\n", money);
    }
    return 0;
}
