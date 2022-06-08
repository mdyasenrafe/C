// Problem Statement
// Let xyz denote the 3-digit integer whose digits are x, y, z from left to right.

// Given a 3-digit integer abcabc none of whose digits is00, find abc+bca+cab

// Constraints
// abc is a 3-digit integer abc none of whose digits is 0.
// Input
// Input is given from Standard Input in the following format:

// abc
// Output
// Print the answer.

// Sample 1
// Input
// 123
// Output
// 666
// We have 123+231+312=666




#include <stdio.h>

int main() {
    int a;
    int sum;
    scanf("%d", &a);
    // reverse the three order of digits and add them and sum them
    int x = a%10;
    int y = (a/10)%10;
    int z = (a/100)%10;
    sum = x+y+z;
    print("%d", sum);
    return 0;
}