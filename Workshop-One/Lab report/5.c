#include<stdio.h>
int main(){
    double finalScore;
    printf("Enter your final score for evaluation: ");
    scanf("%lf",&finalScore);

    if (finalScore>80 && finalScore<=100){
        printf("You are passed in distinction.");
    } else if(finalScore>60 && finalScore<=80){
        printf("You are passed in first division.");
    }
     else if(finalScore>50 && finalScore<=60){
        printf("You are passed in second division.");
    }
     else if(finalScore>40 && finalScore<=50){
        printf("You are passed in third division.");
    } else if(finalScore>=0 && finalScore<=40){
        printf("You have failed!");
    }else{
        printf("Invalid input!!");
    }

}