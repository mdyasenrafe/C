#include<stdio.h>

int main() {
    int a, b, c, d, e, f, n;
    scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &n);

        int r = a * b * (n / (a + c));
        int t = n % (a + c);
        if(t > a){
            r += a * b;
        }else{
            r += t * b;
        }

        int ar = d * e * (n / (d + f));
        int aoki_t = n % (d + f);
        if(aoki_t > d){
            ar += d * e;
        }else{
            ar += aoki_t * e;
        }


        if(ar > r){
            printf("Aoki");
        }
        else if(ar < r){
            printf("Takahashi");
        }
        else{
            printf("Draw");
        }

        return 0;
}

