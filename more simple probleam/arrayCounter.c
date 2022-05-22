#include<stdio.h>


int main() {
    int number_of_users;
    scanf("%d" , &number_of_users);
    int ratings[number_of_users];

    for(int i =0; i <number_of_users; i++){
        scanf("%d", &ratings[i]);
    }
    int sum =0;
    for(int i =0; i <number_of_users; i++){
        sum += ratings[i];
    }

    double average =(double)(sum)/number_of_users;

    int count[6]= {0 , 0, 0, 0,0 ,0};
    for(int i =0; i <number_of_users; i++){
        int x = ratings[i];
        count[x]++;
        printf("I => %d =>%d\n", i ,ratings[i]);
    }
    for(int i=1; i<=5; i++){
        printf("%d => %d\n", i, count[i]);
    }
//    for(int val = 1; val <= 5;val++){
//        int count = 0;
//        for(int i = 0; i < number_of_users; i++){
//            if(val == ratings[i]){
//                count+=1;
//            }
//        }
//        printf("%d => %d\n" , val,count);
//    }


    printf("Averge = %lf\n" , average);
    return 0;
}
