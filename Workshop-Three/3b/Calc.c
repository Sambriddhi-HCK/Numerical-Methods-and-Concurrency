/*
Write a program in C to take three numbers from the user and print the sum, multiplication, quotient, subtraction and minimum between three numbers using a pointer. 
*/

#include <stdio.h>

int calc(int, int, int, int *, int * , int *, int* , int*);
int main(){
    int num1, num2, num3;
    int sum, product, quotient, difference, min;

    printf("Enter three numbers (integers) for the program. \n");
    printf("Enter number 1: ");
    scanf("%d", &num1);
    printf("Enter number 2: ");
    scanf("%d", &num2);
    printf("Enter number 3: ");
    scanf("%d", &num3);
    printf("Original values: num1 = %d, num2 = %d, num3 = %d \n", num1, num2, num3);

    calc(num1 , num2, num3,&sum, &product ,&quotient,&difference ,&min);

    printf("The sum of %d, %d and %d is: %d \n", num1, num2, num3, sum );
    printf("The product of %d, %d and %d is: %d \n", num1, num2, num3, product );
    printf("The quotient of %d, %d and %d is: %d \n", num1, num2, num3, quotient );
    printf("The difference of %d, %d and %d is: %d \n", num1, num2, num3, difference );
    printf("The minimum among %d, %d and %d is: %d \n", num1, num2, num3, min );

    return 0;
}
int calc(int num1 , int num2, int num3, int *sum, int *product , int *quotient, int *difference , int *min){
    *sum = num1 + num2 + num3;
    *product = num1 * num2 * num3;
    *quotient = (num1 / num2) / num3;
    *difference = num1 - num2 - num3;

    if ( num1<= num2 && num1 <= num3){
        return *min = num1;
    } else if ( num2<= num3 && num2 <= num1){
        return *min = num2;
    }else{
       return *min = num3; 
    }
}
