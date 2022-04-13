#include<stdio.h>

int main() {
    /* int mathMarks , englishMarks;
    printf("Please enter you maths marks : ");
    scanf("%d" , &mathMarks);
    printf("Please enter you english marks : ");
    scanf("%d" , &englishMarks);
    int totalMarks =  mathMarks + englishMarks;
    printf("Total Marks %d " , totalMarks); */

    //double input value
    int scienceMarks , chemistryMarks;
    printf("Please enter your sciece and chemistry marks : ");
    scanf("%d %d" , &scienceMarks, &chemistryMarks);
    int totalMarks2 = scienceMarks + chemistryMarks;

     printf("Total Marks %d" , totalMarks2);

    return 0;
}
