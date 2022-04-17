#include <stdio.h>

int main() {
    int marks;
    printf("please enter your marks : ");
    scanf("%d", &marks);

    if(marks >= 33){
        printf("Pass");
    }
    else{
        printf("Failure");
    }

    return 0;
}
