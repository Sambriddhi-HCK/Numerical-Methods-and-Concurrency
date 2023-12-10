#include <stdio.h>

/* 2.Write a function that takes two integers as arguments and return the greatest among them
*/
//function prototype
int Greatest(int, int);

//main
int main(){
    int num1, num2;
    printf("To find the greatest among two numbers :\n ");
    printf("Enter the value of num1: ");
    scanf("%d",&num1);
    printf("Enter the value of num2: ");
    scanf("%d",&num2);
    
    printf(" %d is the greatest among the entered numbers.",Greatest(num1,num2));
    return 0;
}

int Greatest(int num1, int num2){

    if (num1>num2){
        return num1;
    }
    else{
        return num2;
    }

    return 0;
}
