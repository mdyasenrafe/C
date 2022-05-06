#include<stdio.h>

int main(){
    int n , k , a;
    scanf("%d %d %d", &n, &k, &a);

    int x = k;
    int y = a;
    int z = 1;

    while(x > 0){
        if(y>n) y = 1;
        z = y;
        y++;
        x--;
    }

    printf("%d", z);
    return 0;
}