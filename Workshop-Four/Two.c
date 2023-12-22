//Finding maximum in an array using dynamic memory allocation.

#include <stdio.h>
#include <stdlib.h>

int main(){
    int *num1, *num2;

    num1 = (int *) malloc (sizeof(int));
    if (num1 == NULL) {
    printf( "Memory allocation for int failed. \n");
    free(num1); // free previiously allocated memory and
    return 1; //exit the program with an error code   
    }

    num2 = (int *) malloc (sizeof(int));
    if (num2 == NULL) {
    printf( "Memory allocation for int failed. \n");
    free(num2); // free previiously allocated memory and
    return 1; //exit the program with an error code   
    }

    printf("Enter two numbers for the program. \n");
    printf("Enter number 1: ");
    scanf("%d", num1);
    printf("Enter number 2: ");
    scanf("%d", num2);
    int max;

    if (*num1 > *num2){
        max = *num1;
    }else{
        max = *num2;
    }
    printf("The maximum value between %d anf %d is: %d", *num1, *num2, max);

    free(num1);
    free(num2);

}