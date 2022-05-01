#include<stdio.h>
#include<stdbool.h>

int main() {
  int a, b;
  scanf("%d %d" , &a, &b);
  int count = 0;

    while(true){
         a = a * 3;
         b = b * 2;
        count++;

       if(a > b){
          printf("%d\n" , count);
          break;
     }

    }
     return 0;
}
