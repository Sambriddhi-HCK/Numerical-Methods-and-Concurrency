/* Write a program to take three numbers from the user and save it in three different variables. 
You must swap the value of three numbers using function. You must use call by references.
*/
#include <stdio.h>

void swap(int *, int *, int *);

int main(){
    int num1, num2, num3;

    printf("Enter three numbers (integers) for the program. \n");
    printf("Enter number 1: ");
    scanf("%d", &num1);
    printf("Enter number 2: ");
    scanf("%d", &num2);
    printf("Enter number 3: ");
    scanf("%d", &num3);
    printf("Original values: num1 = %d, num2 = %d, num3 = %d \n", num1, num2, num3);
    swap(&num1, &num2, &num3);
    return 0;
}

void swap(int *num1, int *num2, int *num3){

    int temp = *num1;
    *num1 = *num2;
    *num2 = *num3;
    *num3 = temp;
    printf("Swapped values: num1 = %d, num2 = %d, num3 = %d ", *num1, *num2, *num3);

}