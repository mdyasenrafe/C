#include <stdio.h>


int getMin(int a , int b){

    if(a < b)  return a;
    else       return b;

}

int main() {
    int n;
    scanf("%d %d %d" ,&a , &b ,&c);

    int temp = getMin(a, b);
    int temp2 = getMin(temp , c);
    printf("your minium value is %d" ,temp2);
    return 0;
}
