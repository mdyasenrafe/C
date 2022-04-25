#include <stdio.h>

int main() {
    int a;
    double  result = 0, output = 0;
    scanf("%d" , &a);
    for(int i = 1; i <= a; i++){
        double b, c;
        scanf("%lf %lf" , &b, &c);
        result = b * c;
        output = result + output;
    }
    printf("%0.3lf\n" , output);
    return 0;

}
