

#include<stdio.h>
int main(){
    int a , b , c , d , e ,f ,x ;
    // take input
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e, &x);
    int y = 0;
    int z = 0;

// for loop for a
    for(int i=0; i<=x; i=i+a+c){
        if(x-i<a){
        y=y+(X-i);
       }
       else{
        y=y+(X-i);
       }
    }
// for loop for b
    for(int i=0;i<=x; i=i+d+f){
        if(x-i<d){
           z=n+(x-i);
        }
        else{
           z=z+D;
       }
   }
// apply condition
   if(y*B == z*E){
     printf("Draw");
   }
   else if(y*B > z*E){
        printf("Takahashi");
   }
   else{
      printf("Aoki");
   }

return 0;
}