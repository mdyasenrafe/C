
#include <stdio.h>
int main() {
    int a;
    int  result;
    int count = 0;
    scanf("%d" , &a);
    for(int i = 1; i <= a; i++){
        int b, c;
        scanf("%d %d" , &b, &c);
        result = c - b;
        if(result !=0 && result != 1){
            count++;
         }

    }
    printf("%d\n" , count);
    return 0;

}
