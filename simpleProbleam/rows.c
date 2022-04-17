#include<stdio.h>

int main() {
   int H, W , h , w, result;
   scanf("%d %d %d %d" , &H , &W, &h  , &w);
   result = (H - h) * (W - w);
   printf("%d" , result);
    return 0;
}

