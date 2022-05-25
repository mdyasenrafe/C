#include<stdio.h>


int main() {
    int *ptr;

    char str[] = "hello";
    char *first = str;
    char * ch = strchr(str, 'd');


    if(!ch){
        printf("Not Found");
    }
    else{
        printf("Found");
    }

    return 0;
}
