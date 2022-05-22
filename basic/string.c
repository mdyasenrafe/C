#include<stdio.h>


int main() {
    char st[] = "This is a new world!";
    int sz = sizeof(st) / sizeof(st[0]);
    st[6] = 'n';
    printf("%s" , st);
    return 0;
}
