 // Masud has recently got his dream job at Voogle. To get to his job, he leaves home at S o'clock (on the 24-hour clock) every day and returns home T o'clock every day.
// The date may change while he is out of home. Outside this time period, he always stays at home.

// Determine whether Masud is away from home at 30 minutes past X o'clock.


// input is given from Standard Input in the following format:
// S T X

// If Masud is not at home at 30 minutes past X o'clock, print Yes; otherwise, print No.
// Sample 1
// input : 7 20 12
// output : Yes
// Masud is away from home between 7 o'clock and 20 o'clock. At 30 minutes past 12 o'clock, he is not at home, so we print Yes.

#include<stdio.h>
int main() {
    int s, t, x;
    scanf("%d %d %d", &s, &t, &x);
    if(s <= x || x < t){
      printf("Yes");
    }
    else{
        printf("NO");
    }

    return 0;
}
