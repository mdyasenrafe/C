#include<stdio.h>

int main() {
    int numb1, numb2;
    printf("please enter your numbers : ");
    scanf("%d %d" , &numb1 , &numb2);

    int max_ab = numb1 > numb2 ? numb2 : numb1;

    printf("%d", max_ab);
//    if(numb1 < numb2){
//        printf("numb1 is greater than numb2");
//    }
//    else {
//        if(numb2 == numb2){
//             printf("numb1 and numb2 is equal");
//        }
//        if(numb2 == numb2){
//             printf("numb2 is greater than numb1");
//        }
//    }
    return 0;
}
