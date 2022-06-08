#include<stdio.h>


int main() {
    int x;
    scanf("%d" , &x);
    int arr[x];
    int size= sizeof(arr) /sizeof(arr[0]);
    printf("array size => %d\n" , size);

    memset(arr , 0, sizeof(arr));
    for(int i = 0; i<= x; i++){
        printf("array index => %d value => %d\n" , i,arr[i]);
    }
    return 0;
}
