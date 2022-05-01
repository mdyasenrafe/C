#include<stdio.h>


int main() {
    int a, b;
    int output;
    scanf("%d %d", &a ,&b);

     if(a !=0){
        int total = (2 * a) + 100;
         output = total - b;
     }
     else {
        output = a + 100;
     }

     printf("%d", output);
    return 0;
}
